import pandas as pd
import re
import os

print("실행됨 확인")

# 현재 실행 중인 파이썬 파일의 디렉터리
script_dir = os.path.dirname(os.path.abspath(__file__))
# 로그 파일 경로 (이제는 .py 파일 기준으로 상대경로)
log_path = os.path.join(script_dir, 'Saved', 'Logs', 'shoulder_test.log')

# 결과 저장 리스트
log_start = []
death_counts = []
totaljump_counts = []
stage1death_counts = []
stage2death_counts = []
stage3death_counts = []
stage1playtime = []
stage2playtime = []
stage3playtime = []
stage1jump_counts = []
stage2jump_counts = []
stage3jump_counts = []

# 로그 파일 열기
with open(log_path, 'r', encoding='utf-8', errors='ignore') as file:
    for line in file:

        match = re.search(r'Logstart\s*[:：]?\s*(\d{4}-\d{1,2}-\d{1,2} \d{2}:\d{2}:\d{2})', line)
        if match:
            time_string = match.group(1)
            log_start.append(time_string)

        # 죽음 로그
        #match = re.search(r'deathcount\s*:\s*(\d+)', line)
        #if match:
        #    count = int(match.group(1))
        #    death_counts.append(count)
        
        match = re.search(r'stage1deathcount\s*:\s*(\d+)', line)
        if match:
            count = int(match.group(1))
            stage1death_counts.append(count)
        
        match = re.search(r'stage2deathcount\s*:\s*(\d+)', line)
        if match:
            count = int(match.group(1))
            stage2death_counts.append(count)
        
        match = re.search(r'stage3deathcount\s*:\s*(\d+)', line)
        if match:
            count = int(match.group(1))
            stage3death_counts.append(count)

        # 플레이타임 로그
        match = re.search(r'stage1playtime\s*:\s*(\d+)', line)
        if match:
            count = int(match.group(1))
            stage1playtime.append(count)
        
        match = re.search(r'stage2playtime\s*:\s*(\d+)', line)
        if match:
            count = int(match.group(1))
            stage2playtime.append(count)
        
        match = re.search(r'stage3playtime\s*:\s*(\d+)', line)
        if match:
            count = int(match.group(1))
            stage3playtime.append(count)
            
        
        #점프 횟수수 로그    
        match = re.search(r'stage1jumpcount\s*:\s*(\d+)', line)
        if match:
            count = int(match.group(1))
            stage1jump_counts.append(count)
        
        match = re.search(r'stage2jumpcount\s*:\s*(\d+)', line)
        if match:
            count = int(match.group(1))
            stage2jump_counts.append(count)
        
        match = re.search(r'stage3jumpcount\s*:\s*(\d+)', line)
        if match:
            count = int(match.group(1))
            stage3jump_counts.append(count)

# 폴더 경로 생성
output_dir = os.path.join(script_dir, 'exeloutput')

# 엑셀 저장 경로 지정
excel_path = os.path.join(output_dir, 'DeathCounts.xlsx')
excel_path2 = os.path.join(output_dir, 'playtime.xlsx')
excel_path3 = os.path.join(output_dir, 'Total.xlsx')

print("리스트 길이 확인")
print("log_start 길이:", len(log_start))
print("death_counts 길이:", len(death_counts))
print("totaljump_counts 길이:", len(totaljump_counts))
print("stage1death_counts 길이:", len(stage1death_counts))
print("stage2death_counts 길이:", len(stage2death_counts))
print("stage3death_counts 길이:", len(stage3death_counts))
print("stage1playtime 길이:", len(stage1playtime))
print("stage2playtime 길이:", len(stage2playtime))
print("stage3playtime 길이:", len(stage3playtime))
print("stage1jump_counts 길이:", len(stage1jump_counts))
print("stage2jump_counts 길이:", len(stage2jump_counts))
print("stage3jump_counts 길이:", len(stage3jump_counts))

# pandas DataFrame으로 정리
df = pd.DataFrame({
    'Log Start': log_start,
    'Stage1 Death Count': stage1death_counts,
    'Stage2 Death Count': stage2death_counts,
    'Stage3 Death Count': stage3death_counts
})

# Excel로 저장
df.to_excel(excel_path, index=False)

df = pd.DataFrame({
    'Log Start': log_start,
    'Stage1 playtime': stage1playtime,
    'Stage2 playtime': stage2playtime,
    'Stage3 playtime': stage3playtime
})

df.to_excel(excel_path2, index=False)


df = pd.DataFrame({
    'Log Start': log_start,
    'Stage1 Jump Count': stage1jump_counts,
    'Stage2 Jump Count': stage2jump_counts,
    'Stage3 Jump Count': stage3jump_counts
})

df.to_excel(excel_path3, index=False)
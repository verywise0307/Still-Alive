import pandas as pd
import re
import os
from itertools import zip_longest

print("실행됨 확인")

# 현재 실행 중인 파이썬 파일의 디렉터리
script_dir = os.path.dirname(os.path.abspath(__file__))
# 로그 파일 경로 (이제는 .py 파일 기준으로 상대경로)
log_path = os.path.join(script_dir, 'Saved', 'Logs', 'shoulder_test.log')

# 결과 저장 리스트
log_start = []
death_counts = []
jump_counts = []
climbing_counts = []
hang_counts = []
attack_counts = []
push_counts = []
crouch_counts = []
signclick_counts = []
animskip_counts = []
npcchat_counts = []
happyending_counts = []
sadending_counts = []

stage1death_counts = []
stage2death_counts = []
stage3death_counts = []
stage1playtime = []
stage2playtime = []
stage3playtime = []
stage1jump_counts = []
stage2jump_counts = []
stage3jump_counts = []
stage1climbing_counts = []
stage2climbing_counts = []
stage3climbing_counts = []
stage1hang_counts = []
stage2hang_counts = []
stage3hang_counts = []
stage1attack_counts = []
stage2attack_counts = []
stage3attack_counts = []
stage1push_counts = []
stage2push_counts = []
stage3push_counts = []
stage1crouch_counts = []
stage2crouch_counts = []
stage3crouch_counts = []
signclick1_counts = []
signclick2_counts = []
signclick3_counts = []
npcchat1_counts = []
npcchat2_counts = []


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
            
        
        #점프 횟수 로그    
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
            
        #오르기 횟수 로그    
        match = re.search(r'stage1climbingcount\s*:\s*(\d+)', line)
        if match:
            count = int(match.group(1))
            stage1climbing_counts.append(count)
        
        match = re.search(r'stage2climbingcount\s*:\s*(\d+)', line)
        if match:
            count = int(match.group(1))
            stage2climbing_counts.append(count)
        
        match = re.search(r'stage3climbingcount\s*:\s*(\d+)', line)
        if match:
            count = int(match.group(1))
            stage3climbing_counts.append(count)
            
        #매달리기 횟수 로그    
        match = re.search(r'stage1hangcount\s*:\s*(\d+)', line)
        if match:
            count = int(match.group(1))
            stage1hang_counts.append(count)
        
        match = re.search(r'stage2hangcount\s*:\s*(\d+)', line)
        if match:
            count = int(match.group(1))
            stage2hang_counts.append(count)
        
        match = re.search(r'stage3hangcount\s*:\s*(\d+)', line)
        if match:
            count = int(match.group(1))
            stage3hang_counts.append(count)
            
        #공격하기 횟수 로그    
        match = re.search(r'stage1attackcount\s*:\s*(\d+)', line)
        if match:
            count = int(match.group(1))
            stage1attack_counts.append(count)
        
        match = re.search(r'stage2attackcount\s*:\s*(\d+)', line)
        if match:
            count = int(match.group(1))
            stage2attack_counts.append(count)
        
        match = re.search(r'stage3attackcount\s*:\s*(\d+)', line)
        if match:
            count = int(match.group(1))
            stage3attack_counts.append(count)
            
        #밀기 횟수 로그    
        match = re.search(r'stage1pushcount\s*:\s*(\d+)', line)
        if match:
            count = int(match.group(1))
            stage1push_counts.append(count)
        
        match = re.search(r'stage2pushcount\s*:\s*(\d+)', line)
        if match:
            count = int(match.group(1))
            stage2push_counts.append(count)
        
        match = re.search(r'stage3pushcount\s*:\s*(\d+)', line)
        if match:
            count = int(match.group(1))
            stage3push_counts.append(count)
            
        #웅크리기 횟수 로그    
        match = re.search(r'stage1crouchcount\s*:\s*(\d+)', line)
        if match:
            count = int(match.group(1))
            stage1crouch_counts.append(count)
        
        match = re.search(r'stage2crouchcount\s*:\s*(\d+)', line)
        if match:
            count = int(match.group(1))
            stage2crouch_counts.append(count)
        
        match = re.search(r'stage3crouchcount\s*:\s*(\d+)', line)
        if match:
            count = int(match.group(1))
            stage3crouch_counts.append(count)
            
        #사인 클릭 횟수 로그    
        match = re.search(r'signclick1count\s*:\s*(\d+)', line)
        if match:
            count = int(match.group(1))
            signclick1_counts.append(count)
        
        match = re.search(r'signclick2count\s*:\s*(\d+)', line)
        if match:
            count = int(match.group(1))
            signclick2_counts.append(count)
            
        match = re.search(r'signclick3count\s*:\s*(\d+)', line)
        if match:
            count = int(match.group(1))
            signclick3_counts.append(count)
            
        match = re.search(r'animskipcount\s*:\s*(\d+)', line)
        if match:
            count = int(match.group(1))
            animskip_counts.append(count)
            
        match = re.search(r'npcchat1\s*:\s*(\d+)', line)
        if match:
            count = int(match.group(1))
            npcchat1_counts.append(count)
            
        match = re.search(r'npcchat2\s*:\s*(\d+)', line)
        if match:
            count = int(match.group(1))
            npcchat2_counts.append(count)
            
        match = re.search(r'happyending\s*:\s*(\d+)', line)
        if match:
            count = int(match.group(1))
            happyending_counts.append(count)
            
        match = re.search(r'sadending\s*:\s*(\d+)', line)
        if match:
            count = int(match.group(1))
            sadending_counts.append(count)



# 폴더 경로 생성
output_dir = os.path.join(script_dir, 'exeloutput')

# 엑셀 저장 경로 지정
excel_path = os.path.join(output_dir, 'ActionLog.xlsx')
excel_path1 = os.path.join(output_dir, 'UILog.xlsx')
excel_path2 = os.path.join(output_dir, 'OtherLog.xlsx')

print("리스트 길이 확인")
print("log_start 길이:", len(log_start))
print("death_counts 길이:", len(death_counts))
print("jump_counts 길이:", len(jump_counts))
print("climbing_counts 길이:", len(climbing_counts))
print("hang_counts 길이:", len(hang_counts))
print("attack_counts 길이:", len(attack_counts))
print("push_counts 길이:", len(push_counts))
print("crouch_counts 길이:", len(crouch_counts))

print("stage1death_counts 길이:", len(stage1death_counts))
print("stage2death_counts 길이:", len(stage2death_counts))
print("stage3death_counts 길이:", len(stage3death_counts))

print("stage1playtime 길이:", len(stage1playtime))
print("stage2playtime 길이:", len(stage2playtime))
print("stage3playtime 길이:", len(stage3playtime))

print("stage1jump_counts 길이:", len(stage1jump_counts))
print("stage2jump_counts 길이:", len(stage2jump_counts))
print("stage3jump_counts 길이:", len(stage3jump_counts))

print("stage1climbing_counts 길이:", len(stage1climbing_counts))
print("stage2climbing_counts 길이:", len(stage2climbing_counts))
print("stage3climbing_counts 길이:", len(stage3climbing_counts))

print("stage1hang_counts 길이:", len(stage1hang_counts))
print("stage2hang_counts 길이:", len(stage2hang_counts))
print("stage3hang_counts 길이:", len(stage3hang_counts))

print("stage1attack_counts 길이:", len(stage1attack_counts))
print("stage2attack_counts 길이:", len(stage2attack_counts))
print("stage3attack_counts 길이:", len(stage3attack_counts))

print("stage1push_counts 길이:", len(stage1push_counts))
print("stage2push_counts 길이:", len(stage2push_counts))
print("stage3push_counts 길이:", len(stage3push_counts))

print("stage1crouch_counts 길이:", len(stage1crouch_counts))
print("stage2crouch_counts 길이:", len(stage2crouch_counts))
print("stage3crouch_counts 길이:", len(stage3crouch_counts))

print("stage1death_counts 길이:", len(stage1death_counts))
print("stage2death_counts 길이:", len(stage2death_counts))
print("stage3death_counts 길이:", len(stage3death_counts))

print("signclick1_counts 길이:", len(signclick1_counts))
print("signclick2_counts 길이:", len(signclick2_counts))
print("signclick3_counts 길이:", len(signclick3_counts))
print("animskip_counts 길이:", len(animskip_counts))
print("npcchat1_counts 길이:", len(npcchat1_counts))
print("npcchat2_counts 길이:", len(npcchat2_counts))
print("happyending_counts 길이:", len(happyending_counts))
print("sadending_counts 길이:", len(sadending_counts))

# zip_longest 사용해 길이 맞추기
data = list(zip_longest(
    log_start,
    stage1playtime,
    stage2playtime,
    stage3playtime,
    stage1death_counts,
    stage2death_counts,
    stage3death_counts,
    happyending_counts,
    sadending_counts,
    fillvalue=None
))

# DataFrame 생성
df = pd.DataFrame(data, columns=[
    'Log Start',
    'Stage1 Playtime',
    'Stage2 Playtime',
    'Stage3 Playtime',
    'Stage1 Death Count',
    'Stage2 Death Count',
    'Stage3 Death Count',
    'happyending',
    'sadending'
])

# 엑셀로 저장
df.to_excel(excel_path2, index=False)
print("엑셀 저장 완료:", excel_path2)

data = list(zip_longest(
    stage1jump_counts,
    stage2jump_counts,
    stage3jump_counts,
    stage1climbing_counts,
    stage2climbing_counts,
    stage3climbing_counts,
    stage1hang_counts,
    stage2hang_counts,
    stage3hang_counts,
    stage1attack_counts,
    stage2attack_counts,
    stage3attack_counts,
    stage1push_counts,
    stage2push_counts,
    stage3push_counts,
    stage1crouch_counts,
    stage2crouch_counts,
    stage3crouch_counts,
    fillvalue=None
))

# DataFrame 생성
df = pd.DataFrame(data, columns=[
    'Stage1 Jump Count',
    'Stage2 Jump Count',
    'Stage3 Jump Count',
    'Stage1 Climbing Count',
    'Stage2 Climbing Count',
    'Stage3 Climbing Count',
    'Stage1 Hang Count',
    'Stage2 Hang Count',
    'Stage3 Hang Count',
    'Stage1 Attack Count',
    'Stage2 Attack Count',
    'Stage3 Attack Count',
    'Stage1 Push Count',
    'Stage2 Push Count',
    'Stage3 Push Count',
    'Stage1 Crouch Count',
    'Stage2 Crouch Count',
    'Stage3 Crouch Count'
])

# 엑셀로 저장
df.to_excel(excel_path, index=False)
print("엑셀 저장 완료:", excel_path)

# zip_longest 사용해 길이 맞추기
data = list(zip_longest(
    signclick1_counts,
    signclick2_counts,
    signclick3_counts,
    animskip_counts,
    npcchat1_counts,
    npcchat2_counts,
    fillvalue=None
))

# DataFrame 생성
df = pd.DataFrame(data, columns=[
    'signclick1_counts',
    'signclick2_counts',
    'signclick3_counts',
    'animskip_counts',
    'npcchat1_counts',
    'npcchat2_counts'
])

# 엑셀로 저장
df.to_excel(excel_path1, index=False)
print("엑셀 저장 완료:", excel_path1)
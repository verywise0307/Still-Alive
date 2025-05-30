import pandas as pd
import re
import os

print("실행됨 확인")

# 현재 실행 중인 파이썬 파일의 디렉터리
script_dir = os.path.dirname(os.path.abspath(__file__))
# 로그 파일 경로 (이제는 .py 파일 기준으로 상대경로)
log_path = os.path.join(script_dir, 'Saved', 'Logs', 'shoulder_test.log')

# 결과 저장 리스트
death_counts = []

# 로그 파일 열기
with open(log_path, 'r', encoding='utf-8', errors='ignore') as file:
    for line in file:
        # deathcount : 숫자 형태를 찾는 정규표현식
        match = re.search(r'deathcount\s*:\s*(\d+)', line)
        if match:
            count = int(match.group(1))
            death_counts.append(count)

# 폴더 경로 생성
output_dir = os.path.join(script_dir, 'exeloutput')

# 엑셀 저장 경로 지정
excel_path = os.path.join(output_dir, 'DeathCounts.xlsx')

# pandas DataFrame으로 정리
df = pd.DataFrame({'Death Count': death_counts})

# Excel로 저장
df.to_excel(excel_path, index=False)
print(f"총 {len(death_counts)}개의 deathcount 항목이 추출되어 엑셀로 저장됨.")

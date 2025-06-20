import pandas as pd
import re
import os

print("실행됨 확인")

# 현재 경로 기준 로그 파일 위치
script_dir = os.path.dirname(os.path.abspath(__file__))
log_path = os.path.join(script_dir, 'Saved', 'Logs', 'shoulder_test.log')
output_dir = os.path.join(script_dir, 'exeloutput')
os.makedirs(output_dir, exist_ok=True)
excel_path = os.path.join(output_dir, 'Log_AllInOne.xlsx')

# 모든 결과를 저장할 리스트
log_data = []

# 전체 패턴을 한 번에 정의
pattern = re.compile(r'''
    Logstart\s*:\s*(?P<logstart>[\d\- :]+)\s+
    deathcount\s*:\s*(?P<deathcount>\d+)\s+
    stage1deathcount\s*:\s*(?P<stage1death>\d+)\s+
    stage2deathcount\s*:\s*(?P<stage2death>\d+)\s+
    stage3deathcount\s*:\s*(?P<stage3death>\d+)\s+
    stage1playtime\s*:\s*(?P<stage1play>[-]?\d+\.?\d*)\s+
    stage2playtime\s*:\s*(?P<stage2play>\d+\.?\d*)\s+
    stage3playtime\s*:\s*(?P<stage3play>\d+\.?\d*)\s+
    jumpcount\s*:\s*(?P<jumpcount>\d+)\s+
    stage1jumpcount\s*:\s*(?P<stage1jump>\d+)\s+
    stage2jumpcount\s*:\s*(?P<stage2jump>\d+)\s+
    stage3jumpcount\s*:\s*(?P<stage3jump>\d+)\s+
    climbingcount\s*:\s*(?P<climb>\d+)\s+
    stage1climbingcount\s*:\s*(?P<stage1climb>\d+)\s+
    stage2climbingcount\s*:\s*(?P<stage2climb>\d+)\s+
    stage3climbingcount\s*:\s*(?P<stage3climb>\d+)\s+
    hangcount\s*:\s*(?P<hang>\d+)\s+
    stage1hangcount\s*:\s*(?P<stage1hang>\d+)\s+
    stage2hangcount\s*:\s*(?P<stage2hang>\d+)\s+
    stage3hangcount\s*:\s*(?P<stage3hang>\d+)\s+
    attackcount\s*:\s*(?P<attackcount>\d+)\s+
    stage1smashattackcount\s*:\s*(?P<stage1smashattackcount>\d+)\s+
    stage1throwingattackcount\s*:\s*(?P<stage1throwingattackcount>\d+)\s*
    stage1throwingaccuracy\s*:\s*(?P<stage1throwingaccuracy>\d+)\s+
    stage2attackcount\s*:\s*(?P<stage2attackcount>\d+)\s+
    stage2throwingaccuracy\s*:\s*(?P<stage2throwingaccuracy>\d+)\s+
    bossyarnattackaccuracy\s*:\s*(?P<bossyarnattackaccuracy>\d+)\s+
    crouchcount\s*:\s*(?P<crouch>\d+)\s+
    stage1crouchcount\s*:\s*(?P<stage1crouch>\d+)\s+
    stage2crouchcount\s*:\s*(?P<stage2crouch>\d+)\s+
    stage3crouchcount\s*:\s*(?P<stage3crouch>\d+)\s+
    pushcount\s*:\s*(?P<push>\d+)\s+
    stage1pushcount\s*:\s*(?P<stage1push>\d+)\s+
    stage2pushcount\s*:\s*(?P<stage2push>\d+)\s+
    stage3pushcount\s*:\s*(?P<stage3push>\d+)\s+
    signcount\s*:\s*(?P<sign>\d+)\s+
    signclick1count\s*:\s*(?P<sign1>\d+)\s+
    signclick2count\s*:\s*(?P<sign2>\d+)\s+
    signclick3count\s*:\s*(?P<sign3>\d+)\s+
    animskipcount\s*:\s*(?P<animskip>\d+)\s+
    npcchat\s*:\s*(?P<npcchat>\d+)\s+
    npcchat1\s*:\s*(?P<npc1>\d+)\s+
    npcchat2\s*:\s*(?P<npc2>\d+)\s+
    happyending\s*:\s*(?P<happy>\d+)\s+
    sadending\s*:\s*(?P<sad>\d+)\s+
    stage1bosstime\s*:\s*(?P<stage1bosstime>\d+\.?\d*)\s+
    boss1remaininglives\s*:\s*(?P<boss1lives>\d+)\s+
    stage2bosstime\s*:\s*(?P<stage2bosstime>\d+\.?\d*)\s+
    boss2remaininglives\s*:\s*(?P<boss2lives>\d+)\s+
    stage3bosstime\s*:\s*(?P<stage3bosstime>\d+\.?\d*)\s+
    boss3remaininglives\s*:\s*(?P<boss3lives>\d+)\s+
    bossfailcount\s*:\s*(?P<bossfailcount>\d+)\s+
    boss1failcount\s*:\s*(?P<boss1failcount>\d+)\s+
    boss2failcount\s*:\s*(?P<boss2failcount>\d+)\s+
    boss3failcount\s*:\s*(?P<boss3failcount>\d+)
''', re.VERBOSE)

with open(log_path, 'r', encoding='utf-8', errors='ignore') as file:
    for line in file:
        match = pattern.search(line)
        if match:
            log_data.append(match.groupdict())

# DataFrame으로 변환
df = pd.DataFrame(log_data)

# 행과 열을 바꾸기 (transpose)
df = df.transpose()

# 엑셀 저장
df.to_excel(excel_path, index=True)
print("엑셀 저장 완료:", excel_path)

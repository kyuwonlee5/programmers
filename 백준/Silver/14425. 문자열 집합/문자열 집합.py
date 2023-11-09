import sys
input = sys.stdin.readline

# set 사용
s = set()
N, M = map(int, input().split())
for i in range(N):
    s.add(input())
answer = 0
for i in range(M):
    t = input()
    if t in s:
        answer += 1
print(answer)        


def solution(dot):
    # dot[0] = x좌표, dot[1] = y좌표
    # dot의 위치를 return
    
    if (dot[0] > 0) and (dot[1] > 0):
        answer = 1
    elif (dot[0] > 0) and (dot[1] < 0):
        answer = 4
    elif (dot[0] < 0) and (dot[1] > 0):
        answer = 2
    else:
        answer = 3
    
    return answer
def solution(array, height):
    # 키 가 담긴 정수배열 array
    # height = 머쓱이 키
    # 키큰 사람 return
    answer = 0
    for i in array:
        if i > height:
            answer += 1
    
    return answer
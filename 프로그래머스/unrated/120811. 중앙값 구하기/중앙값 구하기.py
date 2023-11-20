def solution(array):
    # 중앙값 = 가운데 오는 값
    # 배열 array 에서 중앙값 return
    array.sort()
    center = len(array) // 2 # 몫만 나오게 구함
    return array[center]
    
        
        
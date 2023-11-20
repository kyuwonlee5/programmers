def solution(money):
    # 한잔 = 5500원
    # money 만큼 마실수 있는 최대한의 음료
    # answer = [마실수 있는 잔의 수, 남는 돈]
    price = 5500
    return [(money // price), (money % price)]
    
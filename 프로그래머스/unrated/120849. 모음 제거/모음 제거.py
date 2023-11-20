def solution(my_string):
    moeum = ("a", "e", "i", "o", "u")
    for i in moeum:
        my_string = my_string.replace(i,"")
    return my_string
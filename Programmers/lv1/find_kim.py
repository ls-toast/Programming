def solution(seoul):
    answer = ''
    num = 0
    for i in seoul:
        if i == "Kim":
            answer = "김서방은 "+str(num)+"에 있다"
        num += 1
    return answer
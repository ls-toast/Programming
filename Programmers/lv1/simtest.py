def solution(answers):
    answer = []
    arrA = [1,2,3,4,5]
    arrB = [2,1,2,3,2,4,2,5]
    arrC = [3,3,1,1,2,2,4,4,5,5]
    cnt = [0,0,0]
    
    for i in range(len(answers)):
        if(arrA[i%len(arrA)] == answers[i]):
            cnt[0] += 1
        if(arrB[i%len(arrB)] == answers[i]):
            cnt[1] += 1
        if(arrC[i%len(arrC)] == answers[i]):
            cnt[2] += 1
    max_num = max(cnt)
    for i in range(3):
        if(max_num == cnt[i]):
            answer.append(i+1)
    return answer
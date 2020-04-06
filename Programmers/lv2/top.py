def solution(heights):
    answer = []
    answer.append(0)
    for i in range(1,len(heights)):
        chk = False
        for j in range(i,-1,-1):
            if heights[j] > heights[i] :
                chk = True
                answer.append(j+1)
                break
        if(chk == False):
            answer.append(0)
    return answer
def solution(array, commands):
    answer = []
    for cmd in commands:
        lst = array[cmd[0]-1 : cmd[1]]
        lst.sort()
        answer.append(lst[cmd[2]-1])
    return answer
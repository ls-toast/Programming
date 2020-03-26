def solution(p, c):
    p.sort()
    c.sort()
    for par,com in zip(p,c):
        if par != com:
            return par
    
    return p[-1]
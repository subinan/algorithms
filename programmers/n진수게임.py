def solution(n, t, m, p):
    base=range(n) # n진법 숫자
    base=list(map(str, base))
    for i in range(n):
        base[i]=base[i].replace('10','A')
        base[i]=base[i].replace('11','B')
        base[i]=base[i].replace('12','C')
        base[i]=base[i].replace('13','D')
        base[i]=base[i].replace('14','E')
        base[i]=base[i].replace('15','F')
    
    s='' # 게임 정답
    for i in range(t*m):
        tmp=i
        num=''
        while tmp>=n:
            num+=base[tmp%n]
            tmp//=n
        num+=base[tmp]
        s+=num[::-1]
        
    answer = ''
    for i in range(len(s)):
        if i%m==0:
            answer+=s[i+(p-1)]
        if len(answer)==t:
            break
    return answer
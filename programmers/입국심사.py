def check(x, n, times):
    sum=0
    for t in times:
        sum+=(x//t) # x분 동안 심사관이 받을 수 있는 사람의 수
    print(sum, n)
    if sum>=n:
        return True
    else:
        return False

def solution(n, times):
    times.sort()
    lt=1
    rt=n*times[-1]
    res=0
    while lt<=rt:
        mid=(lt+rt)//2
        if check(mid, n, times):
            rt=mid-1
            res=mid
        else:
            lt=mid+1
    return res
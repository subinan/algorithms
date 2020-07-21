# 돈 계산
def Count(x, budgets):
    sum=0
    # 예산을 넘으면 상한액으로, 아니면 그대로 배정
    for b in budgets:
        if b>x:
            sum+=x
        else:
            sum+=b
    return sum
            
def solution(budgets, M):
    budgets.sort()
    lt=1
    rt=budgets[-1]
    # 이분 탐색
    while lt<=rt:
        mid=(lt+rt)//2
        if Count(mid, budgets)<=M:
            res=mid
            lt=mid+1
        else:
            rt=mid-1
    return res
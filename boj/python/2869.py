def check(day):
	# day일이 지난 후 도착하는지 체크
    if a*day-b*(day-1)>=v:
        return True
    else:
        return False

if __name__=="__main__":
    a, b, v=map(int, input().split())
    lt=0
    rt=v
    ans=0
    while lt<=rt:
        mid=(lt+rt)//2
        # 도착한다면 날짜를 더 줄여서 검색
        if check(mid)==True:
            ans=mid
            rt=mid-1
        # 도착하지 않는다면 날짜를 더 늘려서 검색
        else:
            lt=mid+1
    print(ans)
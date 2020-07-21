if __name__=="__main__":
    n=int(input())
    a=list(map(int, input().split()))
    a.sort()
    m=int(input())
    b=list(map(int, input().split()))
    for i in range(m):
        lt=0
        rt=n-1
        while lt<=rt:
            mid=(lt+rt)//2
            if a[mid]==b[i]:
                print("1")
                break
            elif a[mid]>b[i]:
                rt=mid-1
            else:
                lt=mid+1
        else:
            print("0")
def solution(citations):
    answer=0
    n=len(citations)
    for h in range(n+1):
        cnt=sum(x>=h for x in citations) # h번 이상 인용된 논문의 수
        if answer<cnt and cnt>=h and n-cnt<=h:
            answer=h
    return answer
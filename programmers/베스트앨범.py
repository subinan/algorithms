def solution(genres, plays):
    # 장르 별 속한 노래 재생 수의 합
    d=dict()
    for i in range(len(genres)):
        d[genres[i]]=d.get(genres[i], 0)+plays[i]
    # 내림차 정렬
    d=sorted(d.items(), reverse=True, key=lambda item: item[1])
    
    answer=[]
    # 특정 장르 별로 노래 고유 번호 정리
    for k, v in d:
        tmp=[]
        for i in range(len(genres)):
            if genres[i]==k:
                tmp.append(plays[i])
        tmp.sort(reverse=True) 
        # 노래 장르 별 상위 2개 선택
        for i in range(2):
            if len(tmp)>i and tmp.count(tmp[i]):
                idx=plays.index(tmp[i])
                answer.append(idx)
                # 이미 선택된 고유 번호는 제외
                plays[idx]=0
            
    return answer
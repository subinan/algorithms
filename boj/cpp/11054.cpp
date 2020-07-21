#include <stdio.h>
 
int main(){
	int count;
	scanf("%d", &count);
 
	int seq[1002]={ 0, }; // 수열
	int dp[1001]={ 0, }; // 증가하는 수열 길이
	int ddp[1002]={ 0, }; // 감소하는 수열 길이
	int tmp;
	int max=1;
 
	for(int i=1; i<=count; i++)
		scanf("%d", &seq[i]);
 
	// 증가하는 부분
	for(int i=1; i<=count; i++){
		tmp=0;
		for(int j=0; j<i; j++)
			if(seq[i]>seq[j]&&(dp[j]+1)>tmp)
				tmp=dp[j]+1;
		dp[i]=tmp;
	}	
	
	// 감소하는 부분
	for(int i=count; i>0; i--){
		tmp=0;
		for(int j=count+1; j>i; j--)
			if(seq[i]>seq[j]&&(ddp[j]+1)>tmp)
				tmp=ddp[j]+1;
		ddp[i]=tmp;
	}
 
	// 증가하는 부분과 감소하는 부분의 합의 최댓값 구하기
	for(int i=1; i<=count; i++)
		if(dp[i]+ddp[i]>max)
			max=dp[i]+ddp[i];
	
	
	printf("%d\n", max-1);
}
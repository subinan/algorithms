#include <stdio.h>
 
int main(){
	int count;
	scanf("%d", &count);
 
	int seq[1002]; // 수열
	int dp[1002]={ 0, }; // 감소하는 수열 길이
	int tmp; // 감소하는 수열 길이(임시값)
	int max=1;
 
	// 숫자 입력하기
	for(int i=1; i<=count; i++)
		scanf("%d", &seq[i]);
 
	dp[count+1]=0; seq[count+1]=0; dp[count]=1;
 
	for(int i=count-1; i>=0; i--) {
		tmp=0;
		for(int j=i+1; j<=count+1; j++){
			if(seq[i]>seq[j] && (dp[j]+1)>tmp)
				tmp=dp[j]+1;
		}
		dp[i]=tmp;
 
		if(dp[i]>max) max=dp[i];
	}
 
	printf("%d\n", max);
}
#include <stdio.h>
 
int max(int a, int b){
	return a > b ? a :  b;
}
 
int main(){
	int count;
	scanf("%d", &count);
 
	int seq[1001]; // 수열
	int dp[1001]; // 증가하는 수열 길이
	int tmp; // 증가하는 수열 길이(임시값)
 
	// 숫자 입력하기
	for(int i=1; i<=count; i++)
		scanf("%d", &seq[i]);
 
	dp[0]=0; dp[1]=1;
 
	for(int i=2; i<=count; i++) {
		tmp=0;
		for(int j=0; j<=i; j++){
			if(seq[i]>seq[j] && (dp[j]+1)>tmp)
				tmp=dp[j]+1;
		}
		dp[i]=tmp;
	}
	
	for(int i=1; i<=count; i++)
		if(dp[i]>tmp)
			tmp=dp[i];
 
	printf("%d\n", tmp);
}
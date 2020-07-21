#include <stdio.h>
 
int max(int a, int b){
	return a > b ? a :  b;
}
 
int main(){
	int count;
	scanf("%d", &count);
 
	int score[100001];
	int dp[100001];
 
	for(int i=1; i<=count; i++)
		scanf("%d", &score[i]);
 
	dp[0]=0; dp[1]=score[1]; dp[2]=dp[1]+score[2];
 
	for(int i=3; i<=count; i++)
		dp[i]=max(dp[i-3]+score[i-1]+score[i], dp[i-2]+score[i]);
	
 
	printf("%d\n", dp[count]);
}
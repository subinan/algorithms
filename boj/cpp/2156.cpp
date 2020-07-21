#include <stdio.h>
 
int max(int a, int b){
	return a > b ? a :  b;
}
 
int main(){
	int count;
	scanf("%d", &count);
 
	int wine[10001];
	int dp[10001];
 
	for(int i=1; i<=count; i++)
		scanf("%d", &wine[i]);
 
	dp[0]=0;
	dp[1]=wine[1];
	dp[2]=wine[1]+wine[2];
 
	for(int i=3; i<=count; i++)
		dp[i]=max(dp[i-1], max(dp[i-2]+wine[i], dp[i-3]+wine[i-1]+wine[i]));
	// 현재 포도주를 마시지 않을 경우
	// 이전에 포도주를 마시지 않고 현재 포도주를 마심(연속 1번)
	// 이전에 포도주를 마시고 현재 포도주를 마심(연속 2번)
 
	printf("%d\n", dp[count]);
}
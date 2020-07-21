#include <stdio.h>
 
int main(){
	int count;
	scanf("%d", &count);
 
	int seq[100001];
	int dp[100001];
	int max=-100000000; // 최소값, -1000이 100000번 나왔을 경우
 
	for(int i=1; i<=count; i++)
		scanf("%d", &seq[i]);
 
	dp[0]=0;
	for(int i=1; i<=count; i++){
		dp[i]=seq[i];
		if(dp[i-1]>0&&(dp[i-1]+dp[i])>0) // 지난번이 음수일 경우나 더했을 때 음수가 되는 경우는 더하지 않음
			dp[i]+=dp[i-1];
		if(dp[i]>max) max=dp[i];
	}
	
	printf("%d\n", max);
}
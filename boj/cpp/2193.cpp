#include <stdio.h>
long long dp[91][2];
 
int main(){
	int n;
	long long int total=0;
	scanf("%d",&n);
	
    // 일의 자리
    // 0은 해당 x, 1만 해당
	dp[1][0]=0;
	dp[1][1]=1;
 
	for(int i=2;i<=n;i++){
		dp[i][0]=dp[i-1][0]+dp[i-1][1];
		dp[i][1]=dp[i-1][0];
	}
	
	total=dp[n][0]+dp[n][1];
	printf("%lld\n", total);
}
#include <stdio.h>
 
int dp[1000001];
 
int main(){
	int n;
	scanf("%d",&n);
 
	dp[0] = 1;
	dp[1] = 1;
 
    // 11726에서 
    // 1. 2*1 두 개 붙이는 경우
    // 2. 2*2 하나 붙이는 경우
    // 하나의 경우의 수가 추가됨
	for(int i = 2;i <= n;i++){
		dp[i] = (dp[i - 1] + 2 * dp[i-2]) % 10007;
	}
 
	printf("%d\n", dp[n]);
}
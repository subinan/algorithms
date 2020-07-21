#include <stdio.h>
 
int dp[1000001];
 
int main(){
	int n;
	scanf("%d",&n);
 
	dp[0] = 1;
	dp[1] = 1;
 
	for(int i = 2;i <= n;i++){
        // 2*(n-1) 타일의 뒤에 2*1 한 개 붙이는 경우
        // +
        // 2*(n-2) 타일의 뒤에 1*2 두 개 붙이는 경우
		dp[i] = (dp[i - 1] + dp[i-2]) % 10007;
	}
 
	printf("%d\n", dp[n]);
}
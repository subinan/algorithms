#include <stdio.h>
 
int main(void){
	int n, k; // 0 ~ n까지의 정수 k개를 더해서 그 합이 n이 되는 경우의 수
	scanf("%d %d", &n, &k);
 
	int dp[201][201]={ 0, };
 
	// 초기화
	for(int i=1; i<=k; i++)
		dp[0][i]=1;
	
 
	for(int i=1; i<=n; i++){
		for(int j=1; j<=k; j++)
			dp[i][j]=(dp[i-1][j]+dp[i][j-1])%1000000000; 
	}
 
	printf("%d\n", dp[n][k]);
}
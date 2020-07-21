#include <stdio.h>
 
int main(){
	// 각 테스트 케이스 별 파도반 수열
	long long int dp[101]={ 0, 1, 1, 1, 2, 2, };
 
	for(int i=6; i<=100; i++)
		dp[i]=dp[i-1]+dp[i-5];
	
	int n, t;
	scanf("%d",&n);
 
	for(int i=1; i<=n; i++){
		scanf("%d", &t);
		printf("%lld\n", dp[t]);
	}
}
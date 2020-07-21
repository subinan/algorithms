#include <stdio.h>
#define mod 1000000000
int dp[1000001][10];
 
int main(){
	int n;
	int total=0;
	scanf("%d",&n);
	
    // 일의 자리
    // 0~9가 몇 개인지
	dp[1][0] = 0; // 0: 0개
	for(int i=1; i<10; i++)
		dp[1][i]=1; // 1~9: 1개
 
	for(int i=2;i<=n;i++){
		for(int j=0; j<10; j++){
			if(j==0) dp[i][j]=dp[i-1][1]%mod; // 1의 자리가 0이 나오는 경우: 1의 자리가 1일 때
			else if(j==9) dp[i][j]=dp[i-1][8]%mod; // 1의 자리가 9가 나오는 경우: 1의 자리가 8일 때
			else dp[i][j]=(dp[i-1][j-1]+dp[i-1][j+1])%mod; // 1의 자리가 3(n)이 나오는 경우: 1의 자리가 2일 때(n-1), 4일 때(n+1)
		}
	}
	
	for(int i=0; i<10; i++)
		total=(total+dp[n][i])%mod;
 
	printf("%d\n", total%mod);
}
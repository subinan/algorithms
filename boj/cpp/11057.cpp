#include <stdio.h>
#define mod 10007
int dp[1000001][10];
 
int main(){
	int n;
	int total=0;
	scanf("%d",&n);
	
    // 일의 자리
    // 0~9가 몇 개인지
	for(int i=0; i<10; i++)
		dp[1][i]=1; // 0~9: 1개
 
	for(int i=2;i<=n;i++){
		for(int j=0; j<10; j++){
			//  1의 자리가 5(n)가 나오는 경우: 1의 자리가 0, 1, 2, 3, 4, 5인 경우의 합
			for(int k=0; k<=j; k++){
				dp[i][j]=(dp[i][j]+dp[i-1][k])%mod;
			}
		}
	}
	
	for(int i=0; i<10; i++)
		total=(total+dp[n][i])%mod;
 
	printf("%d\n", total%mod);
}
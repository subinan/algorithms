#include <stdio.h>
 
int dp[1000001];
 
int main(){
	int n, m[100];
	scanf("%d",&n);
 
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
 
	for(int k = 0; k < n; k++){
		scanf("%d", &m[k]);
		for(int i = 4;i <= m[k];i++){
			if(dp[i] == 0) {
				dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
			}
		}
	}
	
	for(int k = 0; k < n; k++)
		printf("%d\n", dp[m[k]]);
 
}
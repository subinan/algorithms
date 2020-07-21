#include <stdio.h>
 
int max(int a, int b){
	return a>b?a:b;
}
 
int main(void){
	int n;
	scanf("%d", &n);
 
	int card[10001];
	for(int i=1; i<=n; i++)
		scanf("%d", card+i);
 
	int dp[1001]={ 0, };
	int maxi=0;
 
	for(int i=1; i<=n; i++){
		for(int j=0; j<=i; j++)
			maxi=max(card[i-j]+dp[j], maxi);
		dp[i]=maxi;
	}
 
	printf("%d\n", dp[n]);
}
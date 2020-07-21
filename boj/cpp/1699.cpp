#include <stdio.h>
 
int min(int a, int b){
	return a>b?b:a;
}
 
int main(){
	int n;
	scanf("%d",&n);
 
	int dp[100001]={ 0, };
 
	for(int i=1; i<=n; i++){
		dp[i]=i;
		for(int j=1; j*j<=i; j++)
			dp[i]=min(dp[i], dp[i-j*j]+1);
	}
 
	printf("%d\n", dp[n]);
}

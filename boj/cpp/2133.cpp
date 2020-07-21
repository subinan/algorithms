#include <stdio.h>
 
int main(){
	int n;
	scanf("%d",&n);
 
	int dp[31]={ 1, 0, };
 
	dp[2]=3;
 
	for(int i=4; i<=n; i++)
		if(i%2==0){
			dp[i]=dp[i-2]*3;
			for(int j=4; i-j>=0; j+=2)
				dp[i]+=dp[i-j]*2;
		}
		
 
	printf("%d\n", dp[n]);
}
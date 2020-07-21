#include <stdio.h>
 
int main(void){
	int n, m[100];
	int sum=0;
 
	scanf("%d", &n);
 
	for(int i=0;i<n;i++){
		scanf("%1d",&m[i]);
		sum+=m[i];
	}
 
	printf("%d",sum);
}
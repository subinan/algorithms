#include<stdio.h>
 
int main(){
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<n-1;i++){
		for(int j=0;j<i;j++)
			printf(" ");
		for(int j=0;j<2*(n-i)-1;j++)
			printf("*");
        printf("\n");
    }
 
	for(int i=n-1;i>=0;i--){
		for(int j=0;j<i;j++)
			printf(" ");
		for(int j=0;j<2*(n-i)-1;j++)
			printf("*");
        printf("\n");
    }
}
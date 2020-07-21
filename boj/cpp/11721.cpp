#include <stdio.h>
#include <string.h> 
 
int main(void){
	char s[100];
 
	scanf("%s", s);
 
	for(int i=1;i<=strlen(s);i++){
		printf("%c", s[i-1]);
		if(i%10==0)
			printf("\n");
	}
    
    printf("\n");
}
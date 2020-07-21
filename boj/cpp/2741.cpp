#include <stdio.h>
 
int main(){
    int n;
    int i;
    scanf("%d",&n);
    
    if(n<=100000) { 
        for(i=1; i<=n; i++)
            printf("%d\n",i);
    }
}
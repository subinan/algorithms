#include <stdio.h>
 
int main(void){
    int n;
    int num[1000000];
    int min=1000000;
    int max=-1000000;
    
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        scanf("%d", &num[i]);
        if(num[i]>max) max=num[i];
        if(num[i]<min) min=num[i];
    }
    
    printf("%d %d",min,max);
}
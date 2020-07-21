#include<stdio.h>
 
int main(){
    int m, d;
	int date=0;
    
    int month[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char weak[7][4]={"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
 
	scanf("%d %d", &m, &d);
 
	// 총 일수 구하기
	date+=(d-1); // 1월 1일 기준으로
	for(int i=1; i<m; i++){
		date+=month[i-1];
	}
 
	// 날짜 구하기
	printf("%s\n", weak[date%7]);
}
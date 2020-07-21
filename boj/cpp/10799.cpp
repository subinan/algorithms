#include <iostream>
#include <string>

using namespace std;

void push(char *stack, char c, int &sp){
	stack[sp]=c;
	sp++;
}

char pop(char *stack, int &sp){
	if(sp>0) {
		sp--;
		return stack[sp];
	} else return '0';
}

int main(void){
	string s;
	cin>>s;
	
	char stack[100000];
	int sp=0;
	int cnt=0; // 쇠막대기 조각 개수

	for(int i=0; i<s.length(); i++){
		if(s[i]=='('){
			push(stack, '(', sp);
			
			// 레이저가 나올 경우 파이프의 개수를 더함
			if(s[i+1]==')') cnt+=(sp-1);
		} else {
			pop(stack, sp);

			// 파이프의 끝일 경우 1을 더함
			if(s[i-1]!='(') cnt++;
		}
	}

	cout<<cnt<<'\n';
}
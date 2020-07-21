#include <iostream>
#include <vector>
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
	int n;
	cin>>n;

	vector<string> vec(n);
	int cnt;

	for(int i=0; i<n; i++)
		cin>>vec[i];

	char stack[50];
	char ret=' ';
	int sp;

	for(int i=0; i<n; i++){
		sp=0;
		ret=' ';

		for(int j=0; j<vec[i].length(); j++) {
			if(vec[i][j]=='(') push(stack, '(', sp);
			else ret=pop(stack, sp);

			if(ret=='0') j=vec[i].length();
		}

		if(ret!='(' || sp!=0)
			cout<<"NO\n";
		else 
			cout<<"YES\n";
	}
}
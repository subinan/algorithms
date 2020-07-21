#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int stack[10000];
int sp=0;

void push(int n){
	stack[sp]=n;
	sp++;
}

void pop(){
	if(sp>0){
		cout<<stack[sp-1]<<'\n'; 
		sp--;
	} else cout<<-1<<'\n';
}

void size(){
	cout<<sp<<'\n';
}

void empty(){
	if(sp==0) cout<<1<<'\n';
	else cout<<0<<'\n';
}

void top(){
	if(sp==0) cout<<-1<<'\n';
	else cout<<stack[sp-1]<<'\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 

	int n;
	cin>>n;

	string s[10001];
	int num;

	for(int i=1; i<=n+1; i++)
		getline(cin, s[i]);

	for(int i=1; i<=n+1; i++){
		if(strncmp(s[i].c_str(), "push", 4)==0) {
			s[i].erase(0, 5);
			push(stoi(s[i]));
		}
		if(s[i]=="pop") pop();
		if(s[i]=="size") size();
		if(s[i]=="empty") empty();
		if(s[i]=="top") top();
	}
}
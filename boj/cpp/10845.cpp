#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int queue[10000];
int f=0;
int r=0;

void push(int n){
	queue[r]=n;
	r++;
}

void pop(){
	if(f!=r){
		cout<<queue[f]<<'\n'; 
		f++;
	} else cout<<-1<<'\n';
}

void size(){
	cout<<r-f<<'\n';
}

void empty(){
	if(r==f) cout<<1<<'\n';
	else cout<<0<<'\n';
}

void front(){
	if(f!=r) cout<<queue[f]<<'\n'; 
	else cout<<-1<<'\n';
}

void back(){
	if(f!=r) cout<<queue[r-1]<<'\n'; 
	else cout<<-1<<'\n';
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
		if(s[i]=="front") front();
		if(s[i]=="back") back();
	}
}
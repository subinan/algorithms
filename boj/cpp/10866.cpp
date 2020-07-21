#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int deque[10000];
int f=0; // 앞
int r=0; // 뒤

void push_front(int n){
	for(int i=r-1; i>=0; i--) deque[i+1]=deque[i];
	deque[f]=n;
	r++;
}

void push_back(int n){
	deque[r]=n;
	r++;
}

void pop_front(){
	if(f!=r){
		cout<<deque[f]<<'\n';
		f++;
	} else cout<<-1<<'\n';
}

void pop_back(){
	if(f!=r){
		cout<<deque[r-1]<<'\n'; 
		r--;
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
	if(f!=r) cout<<deque[f]<<'\n'; 
	else cout<<-1<<'\n';
}

void back(){
	if(f!=r) cout<<deque[r-1]<<'\n'; 
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
		if(strncmp(s[i].c_str(), "push_front", 10)==0) {
			s[i].erase(0, 11);
			push_front(stoi(s[i]));
		}
		if(strncmp(s[i].c_str(), "push_back", 9)==0) {
			s[i].erase(0, 10);
			push_back(stoi(s[i]));
		}
		if(s[i]=="pop_front") pop_front();
		if(s[i]=="pop_back") pop_back();
		if(s[i]=="size") size();
		if(s[i]=="empty") empty();
		if(s[i]=="front") front();
		if(s[i]=="back") back();
	}
}
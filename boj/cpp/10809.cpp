#include <iostream>
#include <string>

using namespace std;

int main(void){
	string s;
	cin>>s;

	int alpha[26]={ 0, };
	int idx[26];

	// idx 배열 초기화
	for(int i=0; i<26; i++) idx[i]=-1;

	for(int i=0; i<s.length(); i++){
		alpha[s[i]-'a']++;
		if(idx[s[i]-'a']==-1) idx[s[i]-'a']=i;
	}

	for(int i=0; i<26; i++)
		cout<<idx[i]<<' ';
}
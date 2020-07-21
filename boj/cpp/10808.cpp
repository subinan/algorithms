#include <iostream>
#include <string>

using namespace std;

int main(void){
	string s;
	cin>>s;

	int alpha[26]={ 0, };

	for(int i=0; i<s.length(); i++)
		alpha[s[i]-'a']++;

	for(int i=0; i<26; i++)
		cout<<alpha[i]<<' ';
}
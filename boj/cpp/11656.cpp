#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void){
	string s[1001];
	cin>>s[0];

	int l=s[0].length();

	for(int i=1; i<l; i++)
		s[i]=s[0].substr(i);

	sort(s, s+l);

	for(int i=0; i<l; i++)
		cout<<s[i]<<'\n';
}
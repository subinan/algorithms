#include <iostream>
#include <string>
using namespace std;


int main(){
	string s; // B진법 숫자
	int n=0/*10진법으로 변환한 숫자*/, b;
	cin>>s>>b;

	int m=1;
	for(int i=s.length()-1; i>=0; i--) {
		if(s[i]-'A'>=0 && s[i]-'A'<=26)
			n+=(s[i]-'A'+10)*m;
		else
			n+=(s[i]-'0')*m;
		
		m*=b;
	}

	cout<<n;
}
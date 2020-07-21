#include <iostream>
#include <string>
using namespace std;


int main(){
	char num[36]={'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

	string s=""; // 번환한 숫자 저장

	int n, b;
	cin>>n>>b;

	while(n>=b) {
		s+=num[n%b];
		n/=b;
	}

	s+=num[n];

	for(int i=s.length()-1; i>=0; i--) cout<<s[i];
}
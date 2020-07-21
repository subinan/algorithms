#include <iostream>
#include <string>

using namespace std;

int main(void){
	string plain;
	char cipher[100];
	getline(cin, plain);

	for(int i=0; i<plain.length(); i++){
		// 공백이나 숫자는 무시
		if(plain[i]==' ' || (plain[i]-'0')/10 < 1)
			cipher[i]=plain[i];	
		// 대문자일 경우
		else if((plain[i]-'A')/26 < 1)
			cipher[i]='A'+(plain[i]-'A'+13)%26;
		// 소문자일 경우
		else if((plain[i]-'a')/26 < 1)
			cipher[i]='a'+(plain[i]-'a'+13)%26;
	}

	for(int i=0; i<plain.length(); i++)
		cout<<cipher[i];
}
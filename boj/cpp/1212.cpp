#include <iostream>
#include <string>
using namespace std;


int main(){
	string s;
	cin>>s;

	int len=s.length();
	if(s[0]-'0'==0) {
		cout<<'0'; 
		return 0;
	}

	for(int i=0; i<len; i++){
		int bin[3]={ 0, }; // 이진수를 저장할 배열
		int j=2; // 이진수 배열의 인덱스 

		int n=s[i]-'0';
		
		while(n>0) {
			bin[j]=n%2;
			n/=2;
			j--;
		}

		if(i==0) {
			for(int k=j+1; k<3; k++)
				cout<<bin[k];
		} else
			cout<<bin[0]<<bin[1]<<bin[2];
	}
}
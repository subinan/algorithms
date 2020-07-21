#include <iostream>
#include <string>

using namespace std;

int main(void){
	
	for(int i=0; i<100; i++){
		string s;
		getline(cin, s);
		
		if(s.length()==0) break;
		
		int small=0, big=0, num=0, space=0;
		
		for(int j=0; j<s.length(); j++){
			if(s[j]==' ') space++;
			else if((s[j]-'0')/10<1) num++;
			else if((s[j]-'A')/26<1) big++;
			else if((s[j]-'a')/26<1) small++;
		}
		cout<<small<<' '<<big<<' '<<num<<' '<<space<<'\n';
	}
}
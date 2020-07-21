#include <iostream>
#include <vector>
using namespace std;


int main(){
	int dec; // 10진수
	cin>>dec;

	vector<char> bin;
	
	if(dec == 0)
		cout<<'0';
	else {
		while(dec != 0) {
			if(dec % -2 == 0) {
				bin.push_back('0');
				dec = dec / -2;
			}
			else {
				bin.push_back('1');
				dec = (dec - 1) / -2;
			}
		}

		for(int i = bin.size() - 1; i >= 0; i--)
			cout<<bin[i];
	}
}
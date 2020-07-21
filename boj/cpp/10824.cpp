#include <iostream>
#include <string>

using namespace std;

int main(void){
	string a, b, c, d;

	cin>>a>>b>>c>>d;

	a+=b; c+=d;

	cout<<stoll(a)+stoll(c)<<'\n'; // int의 범위를 넘어가기 때문에 stoi 대신 stoll 사용
}
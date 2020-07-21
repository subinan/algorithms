#include <iostream>

using namespace std;

int main(void){
	char c[100];
	int i=0;

	cin>>c;

	while(c[i]!='\0' || i>100) i++;

	cout<<i<<'\n';
}
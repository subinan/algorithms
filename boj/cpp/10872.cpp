#include <iostream>
using namespace std;

int main(void){
	int n;
	cin>>n;

	int ans = 1;

	for(int i = n; i > 0; i--)
		ans *= i;

	cout<<ans;
}
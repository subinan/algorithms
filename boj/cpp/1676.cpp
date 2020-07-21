#include <iostream>
using namespace std;

int main(void){
	int n;
	cin>>n;

	int ans = 0;

	// 5! = 120
	// 10! = 3,628,800
	// 15! = 1,307,674,368,000

	// 5가 나타날 때마다 0 하나 씩 증가
	for(int i = 1; i <= n; i++) {
		if(i % 5 == 0) ans++;
		if(i % 25 == 0) ans++;
		if(i % 125 == 0) ans++;
	}

	cout<<ans;
}

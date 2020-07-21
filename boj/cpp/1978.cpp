#include <iostream>
#include <math.h>
using namespace std;

bool cn(int n){
	int m = sqrt(double(n));

	if(n == 1) return false;

	for(int i = 2; i <= m; i++) {
		if(n % i == 0) return false;
	}

	return true;
}

int main(void){
	int count;
	int n;
	int ans = 0; // 소수의 개수 저장

	cin>>count;
	for(int i = 0; i < count; i++)  {
		cin>>n;
		if(cn(n)) ans++;
	}

	cout<<ans;
}
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
	int m, n; // m 이상, n 이하
	cin>>m>>n;

	for(int i = m; i <= n; i++)
		if(cn(i)) cout<<i<<'\n';
}
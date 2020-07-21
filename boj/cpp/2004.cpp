#include <iostream>
using namespace std;

int main(void){
	long long n, m;
	cin>>n>>m;

	long long ans5 = 0;
	long long ans2 = 0;
	
	// 5의 개수
	for(long long i = 5; i <= n; i *= 5) ans5 += n / i; // n!
	for(long long i = 5; i <= n - m; i *= 5) ans5 -= (n - m) / i; // (n - m)!
	for(long long i = 5; i <= m; i *= 5) ans5 -= m / i; // m!

	// 2의 개수
	for(long long i = 2; i <= n; i *= 2) ans2 += n / i; // n!
	for(long long i = 2; i <= n - m; i *= 2) ans2 -= (n - m) / i; // (n - m)!
	for(long long i = 2; i <= m; i *= 2) ans2 -= m / i; // m!

	cout<<(ans5 > ans2 ? ans2 : ans5);
}
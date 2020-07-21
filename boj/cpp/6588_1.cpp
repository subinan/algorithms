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
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
    
	int n;

	while(1){
		cin>>n;

		if(n == 0) break;

		for(int i = 3; i <= n / 2; i++) {
			if(cn(n - i) && cn(i)){ 
				cout<<n<<" = "<<i<<" + "<<n - i<<'\n';
				break;
			}
			else if(i == n / 2) cout<<"Goldbach's conjecture is wrong.\n";
		}

	}
}
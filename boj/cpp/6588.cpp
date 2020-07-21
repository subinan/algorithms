#include <iostream>
#include <math.h>
using namespace std;

const int MAX = 1000001;
int prime[MAX]; // 0: 소수,1: 소수x

// 에라토스테네스의 채 
void eratostenes(void){
	for(int i = 2; i * i < MAX; i++) {
		if(!prime[i]) // i가 소수일 경우
			for(int j = i * i; j < MAX; j += i) // i의 배수는 모두 소수가 아님 
				prime[j] = 1;
	}

	prime[1] = 1;
}

int main(void){
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 

	int n;
	eratostenes();

	while(1){
		cin>>n;

		if(n == 0) break;

		for(int i = 3; i <= n / 2; i++) {
			if(prime[i] == 0 && prime[n - i] == 0){ 
				cout<<n<<" = "<<i<<" + "<<n - i<<'\n';
				break;
			} else if(i == n / 2)
				cout<<"Goldbach's conjecture is wrong.\n";
		}


	}
}
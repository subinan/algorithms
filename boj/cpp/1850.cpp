#include <iostream>

using namespace std;

int gcd(long long& x, long long& y){
	long long temp, r;

	if(y>x) {
		temp=x;
		x=y;
		y=temp;
	}

	while(1) {
		r=x%y;

		if(r==0)
			return y;
		else {
			temp=y;
			y=x%y;
			x=temp;
		}
	}
}

int main(){
	long long a, b;
	cin>>a>>b;

	long long result=gcd(a, b);

	for(int i=0; i<result; i++)
		cout<<'1';
}
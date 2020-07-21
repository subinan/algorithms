#include <iostream>

using namespace std;

int gcd(int& x, int& y){
	int temp, r;

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
	int a[1000], b[1000], lcm;

	int t;
	cin>>t;

	for(int i=0; i<t; i++) cin>>a[i]>>b[i];
	for(int i=0; i<t; i++) {
		lcm=a[i]*b[i]/gcd(a[i], b[i]);
		cout<<lcm<<endl;
	}
}
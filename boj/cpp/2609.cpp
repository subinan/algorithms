#include <iostream>

using namespace std;

int gcd(int x, int y){
	int temp, r; 

	if(x>=y) {
		temp=x;
		x=y;
		y=temp;
	} 
	
	while(1) {
		r=x%y;

		if(r==0) return y;

		temp=y;
		y=r;
		x=temp;
	}

}

int main(){
	int a, b;

	cin>>a>>b;

	int gcf=gcd(a, b);
	int lcm=gcf*(a/gcf)*(b/gcf);

	cout<<gcf<<endl<<lcm<<endl;

}
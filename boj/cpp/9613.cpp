#include <iostream>
#include <vector>

using namespace std;

int gcd(int x, int y){	
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
	int t;

	cin>>t;
	for(int i=0; i<t; i++) {
		int n;
		cin>>n;

		vector<int> vec(n);
		for(int j=0; j<n; j++) cin>>vec[j];

		long long sum=0;
		for(int k=0; k<n-1; k++)
			for(int l=k+1; l<n; l++)
				sum+=gcd(vec[k], vec[l]);

		cout<<sum<<endl;
	}
}
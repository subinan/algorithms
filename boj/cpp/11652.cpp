#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
	int n;
	cin>>n;

	long long arr[1000000];

	for(int i=0; i<n; i++)
		cin>>arr[i];
	
	sort(arr, arr+n);

	int cnt=1, max=1;
	long long ans=arr[0];

	for(int i=1; i<n; i++){
		if(arr[i]==arr[i-1])
			cnt++;
		else 
			cnt=1;
		
		if(cnt>max){
			max=cnt;
			ans=arr[i];
		}
	}

	cout<<ans<<'\n';

}
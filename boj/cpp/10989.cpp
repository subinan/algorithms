#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
	int n;
	cin>>n;

	int arr[10001]={ 0, };

	int num;

	for(int i=0; i<n; i++){
		cin>>num;
		arr[num]++;
	}

	for(int i=1; i<10001; i++)
		for(int j=0; j<arr[i]; j++)
			cout<<i<<'\n';
}
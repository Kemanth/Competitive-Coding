#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;
	while(t--){
		long long int n,h,sum=0;
		cin>>n>>h;
		long long int arr[n];
		for(long long int i=0;i<n;i++){
			cin>>arr[i];
			sum+=arr[i];
		}
		sort(arr,arr+n);
		long long avg = sum/h;
		//cout<<avg;
		if(n !=h){
			for(long long i=avg;i<=arr[n-1];i++){
				long long hours = 0,j=n-1;

				for(;j>=0;j--){
					if(arr[j]<=i)
						break;
					hours+= ceil((double)arr[j]/i);
				}
				hours+=n-j;
				//cout<<hours<<"ss"<<endl;
				if(hours<=h){
					cout<<i<<endl;
					break;
				}
			}
		}
		else
			cout<<arr[n-1]<<endl;
	}
	return 0;
}
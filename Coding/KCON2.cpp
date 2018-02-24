#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long int n,k;
		cin>>n>>k;
		long long int arr[n],sum=0,rsum=0,lsum=0;
		for(long int i=0;i<n;i++){
			cin>>arr[i];
			sum+=arr[i];
		}
		for(long int i=0;i<n;i++){
			if(arr[i]<0)
				break;
			else{
				lsum+=arr[i];
			}
		}
		for(long int i=n-1;i>=0;i--){
			if(arr[i]<0)
				break;
			else{
				rsum+=arr[i];
			}
		}
		
	}
	return 0;
}

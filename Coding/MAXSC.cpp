#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long int arr[n][n];
		for(int i=n-1;i>=0;i--){
			for(int j=0;j<n;j++){
				cin>>arr[i][j];
			}
			sort(arr[i],arr[i]+n,greater<long long int>());
		}
		long long int pick=arr[0][0],sum=arr[0][0];
		for(int i=1;i<n;i++){
			int f=0;
			for(int j=0;j<n;j++){
				if(arr[i][j]<pick){
					pick=arr[i][j];
					sum+=pick;
					f=1;
					break;
				}
			}
			if(f==0){
				sum=-1;
				break;
			}
		}
		cout<<sum<<"\n";
	}
	return 0;
}

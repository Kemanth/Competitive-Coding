#include<bits/stdc++.h>
using namespace std;

int maxSubArraySum(long long int a[], long long int size)
{
   long long int max_so_far = a[0];
   long long int curr_max = a[0];
 
   for (long long int i = 1; i < size; i++)
   {
        curr_max = max(a[i], curr_max+a[i]);
        max_so_far = max(max_so_far, curr_max);
   }
   return max_so_far;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long int n,k;
		cin>>n>>k;
		long long int arr[n];
		for(long int i=0;i<n;i++)
			cin>>arr[i];
		long long int conc[n*k],x=0;
		for(long long int i=0;i<k;i++){
			for(long long int j=0;j<n;j++){
				conc[x++]=arr[j];
			}
		}
		cout<<maxSubArraySum(conc,n*k)<<"\n";
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n,d;
		cin>>n>>d;
		long long int arr[n],val;
		int k=0;
		for(int i=0;i<n;i++){
			cin>>val;
			if(val>0)
				arr[k++]=val;
		}
		//cout<<k<<"count";
		sort(arr,arr+k);
		long long int sum=0,c=0,pos;
		//cout<<"ere";
		for(int i=k;i>=0;i--){
			if(arr[i]<=d){
				pos=i;
				//cout<<"found"<<pos;
				break;
			}
		}
		for(int i=pos;i>=0;i--){
			if(sum<d){
				//cout<<arr[i]<<"oom";
				c++;
				sum+=arr[i];
			}
			else
				break;
		}
		if(sum>=d)
			cout<<c<<endl;
		else
			cout<<-1<<endl;
	}
	return 0;
}

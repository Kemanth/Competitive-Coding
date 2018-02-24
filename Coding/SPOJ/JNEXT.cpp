#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n;
		vector<int>num;
		cin>>n;
		for(int i=0;i<n;i++){
			int val;
			cin>>val;
			num.push_back(val);
		}
		int carry=1;
		for(int i=n-1;i>=0;i--){
			int sum=num[i]+carry;
			carry=sum/10;
			num[i]=sum%10;
		}
		if(carry)
			num.insert(num.begin(),1);
		for(int i=0;i<num.size();i++){
			cout<<num[i];
		}
		cout<<endl;
	}
	return 0;
}
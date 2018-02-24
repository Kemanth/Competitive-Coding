#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n,c=0;
		cin>>n;
		string str;
		cin>>str;
		c=count(str.begin(),str.end(),'1');
		cout<<(c*(c+1))/2<<endl;
	}
	return 0;
}
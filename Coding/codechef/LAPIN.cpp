#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		int len=str.size();
		if(len%2==0){
			string str1=str.substr(0,len/2);
			string str2=str.substr(len/2,len/2);
			sort(str1.begin(),str1.end());
			sort(str2.begin(),str2.end());
			//cout<<str1<<" "<<str2<<endl;
			if(str1==str2)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		else{
			string str1=str.substr(0,len/2);
			string str2=str.substr(len/2+1,len/2);
			sort(str1.begin(),str1.end());
			sort(str2.begin(),str2.end());
			//cout<<str1<<" "<<str2<<endl;
			if(str1==str2)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}
	return 0;
}
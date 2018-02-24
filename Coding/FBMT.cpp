#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		map<string,int>mp;
		for(int i=0;i<n;i++){
			string str;
			cin>>str;
			/*map<string,int>::iterator it=mp.find(str);
			if(it==m.end()){
				mp.insert(make_pair(str,0));
			}
			else{
				it->second+=1;
			}*/
			mp[str]++;	
		}
		string names[2];
		int k=0;
		for (map<string,int>::iterator it=mp.begin(); it!=mp.end(); ++it){
			names[k++]=it->first;
		}
		if(mp[names[0]]==mp[names[1]]){
			cout<<"Draw"<<endl;
		}
		else if(mp[names[0]]>mp[names[1]]){
			cout<<names[0]<<endl;
		}
		else
			cout<<names[1]<<endl;
	}
	return 0;
}

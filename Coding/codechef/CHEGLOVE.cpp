#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long int l[n],g[n];
		
		for(int i=0;i<n;i++){
			cin>>l[i];
		}

		for(int i=0;i<n;i++){
			cin>>g[i];
		}

		int lf=0,rf=0;

		for(int i=0;i<n;i++){
			if(l[i]>g[i]){
				lf=1;
				break;
			}
		}

		for(int i=0;i<n;i++){
			if(l[i]>g[n-i-1]){
				rf=1;
				break;
			}
		}

		if(lf==1 && rf==1)
			cout<<"none"<<endl;
		else if(lf==1)
			cout<<"back"<<endl;
		else if(rf==1)
			cout<<"front"<<endl;
		else
			cout<<"both"<<endl;
	}
	return 0;
}
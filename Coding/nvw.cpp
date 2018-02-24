#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,start;
		string str;
		cin>>n>>str;
		
		int days[7];
		int num=n/7;
		int rem=n%7;
		if(str=="mon")
			start=0;
		else if(str=="tue")
			start=1;
		else if(str=="wed")
			start=2;
		else if(str=="thu")
			start=3;
		else if(str=="fri")
			start=4;
		else if(str=="sat")
			start=5;
		else if(str=="sun")
			start=6;
		for(int i=0;i<7;i++){
			days[i]=num;
		}
		for(int i=0;i<rem;i++){
			days[start]++;
			start=(start+1)%7;
		}
		for(int i=0;i<7;i++){
			cout<<days[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

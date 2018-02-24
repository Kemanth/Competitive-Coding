#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int>A,B;
	A={0};
	int sum=0,carry=1;
	for(int i=A.size()-1;i>=0;i--){
		sum=A[i]+carry;
		carry=sum/10;
		B.push_back(sum%10);
	}
	B.push_back(carry);
	reverse(B.begin(),B.end());
	
	while(*B.begin()==0){
		B.erase(B.begin());
	}
	for(int i=0;i<B.size();i++){
		cout<<B[i];
	}
	return 0;
}

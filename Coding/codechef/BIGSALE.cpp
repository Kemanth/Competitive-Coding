#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		double loss = 0;
		while(n--){
			int p,q,d;
			cin>>p>>q>>d;
			loss += q * p * (double)(d*d)/10000.00;
		}
		printf("%f\n",loss);
	}
	return 0;
}
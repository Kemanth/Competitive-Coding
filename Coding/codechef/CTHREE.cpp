#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int n,a,b,c,t;
	cin>>t;
	while(t--){
	    cin>>n>>a>>b>>c;
	    long long int count=0;
	    for(int i=1;i<=a;i++){
	        for(int j=1;j<=b;j++){
	            long long int ans=i*j;
	            if(n%ans==0){
	                if((n/ans)<=c){
	                    count++;
	                }
	            }
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}


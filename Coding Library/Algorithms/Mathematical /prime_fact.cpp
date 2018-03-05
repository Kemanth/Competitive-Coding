#include<bits/stdc++.h>

using namespace std;
 

void prime_fact(int n)
{
   while(n%2 == 0){
   		cout<<2<<" ";
   		n/=2;		
   }

   for(int i = 3; i<=sqrt(n); i+=2){
   		while(n%i == 0){

   			cout<<i<<" ";
   			n/=i;
   		}		
   }

   if(n>2)
   		cout<<n<<" ";
}
 
int main()
{
    int num = 315;
    prime_fact(num);
    return 0;
}
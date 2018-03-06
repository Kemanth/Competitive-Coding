#include<bits/stdc++.h>

using namespace std;
 

void prime_fact(int n)
{
   while(n%2 == 0){    				//handle even numbers

   		cout<<2<<" ";
   		n/=2;		
   }

   for(int i = 3; i<=sqrt(n); i+=2){  //handle odd numbers

   		while(n%i == 0){

   			cout<<i<<" ";
   			n/=i;
   		}		
   }

   if(n>2)							//handle prime numbers
   		cout<<n<<" ";
}
 
int main()
{
    int num = 315;
    prime_fact(num);
    return 0;
}
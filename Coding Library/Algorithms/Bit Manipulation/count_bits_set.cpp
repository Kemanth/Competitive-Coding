#include<bits/stdc++.h>

using namespace std;

// Logn approach

void count_bits_set(int n){

	int count = 0,total = 0;
	while(n){

		if(n&1)
			count++;
		total++;
		n=n>>1;
	}
	cout<<"Total bits : "<<total<<endl;
	cout<<"Set bits : "<<count<<endl;
	cout<<"Unset bits : "<<total-count<<endl;
}

// Logn/k approach

void count_bits_lookup(int n){

	int table[]={0,1,1,2,1,2,2,3,1,2,2,3,2,3,3,4}; //store no of bits for all 4 bit numbers
	int count = 0;
	while(n){

		count += table[n & 0xF]; //take 4 bits at a time and lookup table
		n = n>>4;
	}

	cout<<count<<endl;
}

int main(){

	int n = 8;
	
	count_bits_set(n);
	cout<<__builtin_popcount(354)<<endl;
	count_bits_lookup(354);
	return 0;
}
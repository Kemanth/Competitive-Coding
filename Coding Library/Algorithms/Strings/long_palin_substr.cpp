#include<bits/stdc++.h>
using namespace std;

string longest_palin(string str){
	int longest = 0;
	int start =0;
	int low,high;
	for(int i=1;i<str.size();i++){

		//for even length
		low = i-1;
		high = i;
		while(low>=0 && high<str.size() && str[low]==str[high]){
			int len = high - low + 1;
			if(len > longest){
				start = i;
				longest = len;
			}
			low --;
			high++;
		}

		//for odd length
		low = i-1;
		high = i+1;
		while(low>=0 && high<str.size() && str[low]==str[high]){
			int len = high - low + 1;
			if(len > longest){
				start = i;
				longest = len;
			}
			low --;
			high++;
		}
	}
	return str.substr(start,longest);
}

int main(){
	cout<<longest_palin("abaad");
}
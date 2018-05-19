#include<bits/stdc++.h>
using namespace std;

string addBinary(string A, string B) {
    int len1 = A.size();
    int len2 = B.size();
    
    if(len1>len2){
        return addBinary(B,A);
    }
    int pad = len2 - len1; 
    for(int i=0;i<pad;i++){
        A.insert(0,"0");
    }
    cout<<A<<endl;
    cout<<B<<endl;
    int carry=0;
    string ans;
	for(int i=len2-1;i>=0;i--){
		int sum = (A[i] - '0') + (B[i] - '0') + carry;
        carry = 0;
		if(sum>1)
            carry = 1;
        if(sum == 1 || sum == 3)
            ans.push_back(1 + '0');
        else
            ans.push_back(0 + '0');
        
	}
	reverse(ans.begin(),ans.end());
	if(carry)
		ans.insert(ans.begin(),1);
	return ans;
}

//1001001101111001010001110
//1001110001111010101001110

int main(){
    cout<<addBinary("1000011011000000111100110","1010110111001101101000");
}

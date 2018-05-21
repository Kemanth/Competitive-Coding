#include<bits/stdc++.h>
using namespace std;

string add(string A, string B) {
    int len1 = A.size();
    int len2 = B.size();
    
    if(len1>len2){
        return add(B,A);
    }
    int pad = len2 - len1; 
    for(int i=0;i<pad;i++){
        A.insert(0,"0");
    }

    int carry=0;
    string ans;
	for(int i=len2-1;i>=0;i--){
		int sum = (A[i] - '0') + (B[i] - '0') + carry;
        carry = sum/10;
        ans.push_back(sum%10 + '0');
	}
	reverse(ans.begin(),ans.end());
	if(carry)
		ans.insert(ans.begin(),carry + '0');
	return ans;
}

string multiply(string s1,string s2){
    
    string ans="0";
    
    if(s1.size()<s2.size()){
        return multiply(s2,s1);
    }
    if(s1[0]=='0'||s2[0]=='0')
        return "0";
    int lpad = s2.size()-1;
    int rpad = 0;
    for(int i=s2.size()-1;i>=0;i--){
        int carry = 0;
        string temp;
        for(int j=s1.size()-1;j>=0;j--){
            int prod = (s1[j]-'0')*(s2[i]-'0') + carry;
            carry = prod/10;
            //cout<<carry<<endl;
            temp.push_back(prod%10 + '0');
        }
        reverse(temp.begin(),temp.end());
        //cout<<carry;
        if(carry){
            temp.insert(0,to_string(carry));
        }
        temp.insert(0,lpad,'0');
        temp.insert(temp.size(),rpad,'0');
        lpad--;
        rpad++;
        ans = add(ans,temp); 
    }
    while(ans[0]=='0')
        ans.erase(ans.begin());
    return ans;
}
int main(){
    cout<<multiply("1234","32000")<<endl;
    
}

/*
 * 1234
 *   32
 * ....
 * 2468
 *3702
 *......
 *39488 
 */

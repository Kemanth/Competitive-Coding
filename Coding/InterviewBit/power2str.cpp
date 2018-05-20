#include<bits/stdc++.h>
using namespace std;
//https://stackoverflow.com/questions/27756774/dividing-a-large-number-by-2
string divide2(string A){
    string ans;
    int carry = 0,rem;
    for(int i=0;i<A.size();i++){
        rem = ((A[i]-'0') + carry)%2;
        int temp = ((A[i]-'0') + carry)/2;
        
        ans.push_back(temp + '0');
        if(rem)
            carry = 10;
        else
            carry = 0;
    }
    if(carry)
        return "*";

    while(ans.length()>0 && ans[0]=='0')
    {
        ans.erase(ans.begin());
    }
    return ans;
}
int power(string A) {
    
    string ans = A;
    while(1){
        if(ans == "*")
            return 0;
        else if(ans.size()==1){
            if(ans[0]=='2')
                return 1;
        }
        cout<<ans<<endl;
        ans = divide2(ans);
    }
    return 0;
}

int main(){
	cout<<power("147573952589676412928");
}
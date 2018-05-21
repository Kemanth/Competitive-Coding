#include<bits/stdc++.h>
using namespace std;


bool isValid(string ip){
    int i=0,dot = 0;
    int n = ip.size();
    if(ip[n-1]=='.')
        return false;
    for(int i=1;i<n-1;i++){
        if(ip[i]=='.'){
            if(ip[i-1]=='.'||ip[i+1]=='.')
                return false;
        }
    }
    stringstream check(ip);
    string temp;
    while(getline(check,temp,'.')){
        if(stoi(temp)>255)
            return false;
        if(temp.size()>1 && temp[0]=='0'){
            //if(stoi(temp)!=0)
                return false;
        }
    }
    return true;
}

string generateIP(string A,int i,int j,int k){
    string ip = "";
    for(int x=0;x<A.size();x++){
        ip = ip + A[x];
        if(x==i || x==j || x==k){
            ip = ip + '.';
        }   
    }
    return ip;
}

vector<string> restoreIpAddresses(string A) {
    vector<string>ans;
    if(A.size()<4 || A.size()>12)
        return ans;
    int n = A.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                string ip = generateIP(A,i,j,k);
                //cout<<ip<<endl;
                if(isValid(ip)){
                    cout<<ip<<endl;    
                    ans.push_back(ip);
                }
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}

int main(){
    restoreIpAddresses("0100100");
}

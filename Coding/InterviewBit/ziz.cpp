#include<bits/stdc++.h>
using namespace std;

string convert(string A, int B) {
    vector<char>ans[B];
    int dir = 1, i = 0;
    int j =  0;
    if(A.size() == 0 || A.size() == 1 || B == 1){
        return A;
    }
    for(j=0;j<B;j++){
        ans[j].push_back(A[i]);
        i++;
    }
    while(i < A.size()){
        //cout<<i<<endl;
        if(dir==0){
            for(int j=1;j<B;j++){
                ans[j].push_back(A[i]);
                //cout<<A[i]<<endl;
                i++;
            }
            //cout<<"......................"<<endl;
            dir=1;
        }
        else if(dir==1){
            for(int j=B-2;j>=0;j--){
                ans[j].push_back(A[i]);
                i++;
            }
            
            dir=0;
        }
    }
    string res="";

    for(int i=0;i<B;i++){
        for(int j=0;j<ans[i].size();j++){
            res.push_back(ans[i][j]);
        }
    }
    if(!isalpha(res[res.size()-1])){
        res.erase(res.size()-1);
    }
    return res;
}

int main(){
    cout<<convert("ABCDEFGHIJKLMNOPQRS", 6)<<endl;
    return 0;
}

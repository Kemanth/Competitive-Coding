#include<bits/stdc++.h>
using namespace std;

string convert(string A, int B) {
    vector<vector<string> >ans;
    int dir = 0, i = 0;
    cout<<"ss";
    while(i < A.size()-1){
        cout<<"ss";
        if(dir==0){
            cout<<"ss";
            for(int j=0;j<B;j++){
                ans[j].push_back(A[i] + "");
                cout<<A[i]<<endl;
                i++;
            }
            dir=1;
        }
        else if(dir==1){
            for(int j=B-1;j>=0;j--){
                ans[j].push_back(A[i] + "");
                i++;
            }
            dir=1;
        }
    }
    string res="";

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            res+=ans[i][j];
        }
    }
    return res;
}

int main(){
    cout<<convert("PAYPALISHIRING", 3);
}

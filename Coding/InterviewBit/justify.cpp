#include<bits/stdc++.h>
using namespace std;

vector<string> fullJustify(vector<string> &A, int B) {
    vector<string> ans;
    if(A.empty())
        return ans;
    int len = 0,spaces=0,count = 0,j=0,start =0;
    for(int i=0;i<A.size();i++){
        if(len + A[i].size() <= B){
            //cout<<A[i];
            ans.push_back(A[i]);
            ans.push_back(" ");
            len+=A[i].size() + 1;
            count++;
            spaces++;

        }
        else{
            if(count>1){
                ans.erase(ans.end());
                len--;
                spaces--;
            
            }
            i--;
            int pad = B-len;
            int sp = pad/spaces;
            //cout<<pad<<" "<<spaces<<endl;
            int rem = pad%spaces;
            for(j=start;j<ans.size();j++){
                if(ans[j]==" "){
                    ans.insert(ans.begin() + j,sp," ");
                    j+=sp;
                    if(rem){
                        ans.insert(ans.begin() + j," ");
                        rem--;
                        j++;
                    }
                }
            }
            ans.push_back(",");
            start = ans.size();
            len = 0;
            spaces =0;
            pad =0;
            rem = 0;
            count =0;

        }

    }
    if(count>1){
        ans.erase(ans.end());
        len--;
        spaces--;
            
    }
    //cout<<len<<"ss"<<endl;
    ans.insert(ans.end(),B-len," ");
    
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
    
    return ans;
        
}

int main(){
    vector<string> A{"What", "must", "be", "shall", "be."};
    fullJustify(A,12);
}

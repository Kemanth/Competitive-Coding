#include<bits/stdc++.h>
using namespace std;

vector<string> fullJustify(vector<string> &A, int B) {
    vector<string> ans;
    int len = 0,spaces=0,count = 0;
    for(int i=0;i<A.size();i++){
        cout<<"ss";
        if(len + A[i].size() <= B){
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
            i--;
            }
            else{
                cout<<ans[i];
            }
            int pad = B-len;
            int sp = pad/spaces;
            int rem = pad%spaces;
            for(int j=0;j<ans.size();j++){
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
            len = 0;
            spaces =0;
            pad =0;
            rem = 0;
            count =0;

        }

    }
    
    ans.insert(ans.end(),B-len," ");
    /*
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
    */
    return ans;
        
}

int main(){
    vector<string> A{"am", "fasgoprn", "lvqsrjylg", "rzuslwan", "xlaui", "tnzegzuzn", "kuiwdc", "fofjkkkm", "ssqjig", "tcmejefj", "uixgzm", "lyuxeaxsg", "iqiyip", "msv", "uurcazjc", "earsrvrq", "qlq", "lxrtzkjpg", "jkxymjus", "mvornwza", "zty", "q", "nsecqphjy"};
    fullJustify(A,14);
}

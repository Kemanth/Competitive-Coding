#include<bits/stdc++.h>
using namespace std;

int compareVersion(string A, string B) {
    vector <string> tokens1;
    vector <string> tokens2;
    stringstream check1(A),check2(B);
    string intermediate;
    
    while(getline(check1, intermediate, '.'))
    {
        intermediate.erase(0, min(intermediate.find_first_not_of('0'), intermediate.size()-1));;
        tokens1.push_back(intermediate);
    }
    while(getline(check2, intermediate, '.'))
    {
        intermediate.erase(0, min(intermediate.find_first_not_of('0'), intermediate.size()-1));
        tokens2.push_back(intermediate );
    }
    int len = min(tokens1.size(),tokens2.size()); 
    for(int i=tokens1.size()-1;i>=0;i--){
        if(tokens1[i]=="0")
            tokens1.erase(tokens1.begin() + i);
    }
    for(int i=tokens2.size()-1;i>=0;i--){
        if(tokens2[i]=="0")
            tokens2.erase(tokens2.begin() + i);
    }
    for(int i = 0; i < len; i++){
        if(tokens1[i].size()==tokens2[i].size()){
            if(tokens1[i]>tokens2[i])
                return 1;
            else if(tokens1[i]<tokens2[i])
                return -1;
        }
        else if(tokens1[i].size()>tokens2[i].size())
            return 1;
        else{
            
            //cout<<(tokens1[i].size()>tokens2.size());
            return -1;
        }
    }
    if(tokens1.size()==tokens2.size())
        return 0;
    else if(tokens1.size()>tokens2.size())
        return 1;
    else 
        return -1;
}

int main(){
    cout<<compareVersion("4444371174137455","5.168");
    return 0;
}

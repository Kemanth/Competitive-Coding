#include<bits/stdc++.h> 
using namespace std;

int hammingDistance(const vector<int> &A) {
    int set=0,sum=0;
    
    for(int i=0;i<=31;i++){
        set=0;
        for(int j=0;j<A.size();j++){
            if(A[j]&(1<<i)){
                set++;
            }
        }
        sum+=(set*(A.size()-set)*2);
    }
    return sum;
}

int main(){
    vector<int>A{2,4,6};
    cout<<hammingDistance(A)<<endl;
    return 0;
}





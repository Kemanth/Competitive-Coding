#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,m;
    cin>>n;
    long long int pi[n],xi[n],mark[n]={0};
    for(int i=0;i<n;i++){
        cin>>pi[i];
    }
    for(int i=0;i<n;i++){
        cin>>xi[i];
    }
    cin>>m;
    long long int yi[m],ri[m];
    for(int i=0;i<m;i++){
        cin>>yi[i];
    }
    for(int i=0;i<m;i++){
        cin>>ri[i];
    }
    long long int max=0;
    for(int i=0;i<m;i++){
        long long int pop=0;
        int start=(yi[i]-ri[i])<0?0:(yi[i]-ri[i]);
        int end=(yi[i]+ri[i])>=n?(n-1):(yi[i]+ri[i]);
        for(int j=start;j<=end;j++){
            pop+=pi[j];
            mark[j]=1;
        }
        if(pop>max)
            max=pop;
    }
    for(int i=0;i<n;i++){
        if(mark[i]==0){
            max+=pi[i];
        }
    }
    cout<<max;
    return 0;
}


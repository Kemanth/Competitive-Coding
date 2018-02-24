#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int c[2][2]={{1,0},{0,1}};

void multiply(int a[2][2],int b[2][2]){
   
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    int exp[2][2]={{2,0},{1,0}};
    int init[2][1]={{3},{0}};
    while(t--){
        long long n;
        cin>>n;
        for(int i=0;i<n-1;i++){
            multiply(c,exp);
        }
        
        for(int i=0;i<2;i++){
        	for(int j=0;j<2;j++){
            	for(int k=0;k<2;k++){
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            	}
        	}
    	}
    }
    return 0;
}


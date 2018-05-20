#include<bits/stdc++.h>
using namespace std;

int atoi(const string A) {
    int start = 0;
    if(A[0]=='-'||A[0]=='+'){
        start = 1;
    }
    else if(!isdigit(A[0])){
        //cout<<"ss";
        return 0;
    }
    int len = 0;
    for(int i=start;i<A.size();i++){
        
        if(!isdigit(A[i])){
            break;
        }
        len++;
        
    }
    //cout<<32;
    string num = A.substr(start,len);
    //cout<<num<<" dsd"<<len;
    long long int mynum = 0;
    for(int i=0;i<num.size();i++){
        mynum = 10 * mynum + (num[i] - '0');
        if(mynum>INT_MAX){
            if(A[0] == '-')
                return INT_MIN;
            else
                return INT_MAX;
        }
    }
    if(A[0]=='-')
        return -mynum;
    return mynum;
}


int main(){
	cout<<atoi("7 U 0 T7165 0128862 089 39 5");
}
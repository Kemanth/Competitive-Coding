#include<iostream>
using namespace std;
int uP(int i,int j,int A, int B) {
    if(i==A||j==B)
        return 1;
    if(i>A||j>B)
        return 0;
    else
        return uP(i,j+1,A,B)+uP(i+1,j,A,B);
}
int Solution::uniquePaths(int A, int B) {
    return uP(1,1,A,B);
}
int main(){
	cout<<uniquePaths(15,9);
}
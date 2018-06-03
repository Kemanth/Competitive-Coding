long long int calMod(int A, int B, int C) {

    if(A == 1 || B == 0)
        return 1;
    else if(B % 2 == 0){
        long long int y = calMod(A,B/2,C);
        return (y%C * y%C)%C;
    }
    else{
        return (A%C * calMod(A,B-1,C)%C)%C;
    }

}
int Solution::Mod(int A, int B, int C) {
    if(A == 0)
        return 0;
    long long int ans = calMod(A,B,C);
    if(ans<0)
        return ans+C;
    return ans;
}

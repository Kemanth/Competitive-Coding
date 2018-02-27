#include <bits/stdc++.h>

using namespace std;

long getWays(long n, vector < long > c){
    
    int dp[c.size()+1][n+1];  // row = { coin 0 to coin n } and columns = { 0 to total } assume coin 0 means we have no coins left 

    dp[0][0]=1; //set base value 1

    for(int i=1;i<=n;i++){

        dp[0][i] = 0;  //set first row to 0

    }

    for(int i=1;i<=c.size();i++){

        for(int j=0;j<=n;j++){

            
            if(j<c[i-1]){

                dp[i][j] = dp[i-1][j];  //copy previous if coin value greater than total j
            }
            else{

                dp[i][j] = dp[i-1][j] + dp[i][j-c[i-1]]; // value without coin i + value without coin i
            }

            //cout<<dp[i][j]<<" ";
        }

        //cout<<endl;
    }

    return dp[c.size()][n];
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<long> c(m);
    for(int c_i = 0; c_i < m; c_i++){
       cin >> c[c_i];
    }
    // Print the number of ways of making change for 'n' units using coins having the values given by 'c'
    long ways = getWays(n, c);
    //cout<<ways;
    return 0;
}

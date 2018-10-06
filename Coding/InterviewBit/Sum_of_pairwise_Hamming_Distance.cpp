
#define mod 1000000007

int Solution::hammingDistance(const vector<int> &A) {
    
    long long int ans = 0;  // Initialize result
     int n   = A.size();
 
    // traverse over all bits
    for (int i = 0; i < 32; i++)
    {
        // count number of elements with i'th bit set
        int count = 0;
        for (int j = 0; j < n; j++)
            if ( (A[j] & (1 << i)) )
                count++;
 
        // Add "count * (n - count) * 2" to the answer
        ans = ( ans % mod + (count % mod *1ll* (n - count) % mod *1ll* 2 % mod) %mod ) % mod;
    }
 
    return ans % mod;
}


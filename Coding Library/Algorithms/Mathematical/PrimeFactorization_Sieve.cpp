#include <bits/stdc++.h>
using namespace std;

vector <int> factorize(int n)
{
    vector <int> minprime(n+1,0);
    minprime[0] = 1;
    minprime[1] = 1;
    for(int i=2; i*i <= n; i++)
    {
        if(minprime[i] == 0)
        {
            for(int j = i*i ; j<=n ; j+=i)
            if(minprime[j] == 0)
            minprime[j] = i;
        }
    }
    for(int i=0; i<=100; i++)
        if(minprime[i] == 0)
            minprime[i] = i;
    vector <int> res;
    while(n != 1)
    {
        res.push_back(minprime[n]);
        n = n/minprime[n];
    }
    return res;
}
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin >> n;
    vector <int> res = factorize(n);
    for(int i=0; i<res.size(); i++)
        cout<<res[i]<<" ";
	return 0;
}

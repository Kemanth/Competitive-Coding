#include <iostream>
using namespace std;
 
int exp(int b, long long p) {
    int ans = 1;
    while (p) {
	cout<<p<<"ss";    
        if (p & 1) {
		cout<<"hhe";
            ans = ans * b % 9;
        }
        p /= 2;
        b = b * b % 9;
    }
    return ans ? ans : 9;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    for (cin >> t; t > 0; --t) {
        long long a, n;
        cin >> a >> n;
        cout << exp(a % 9, n) << '\n';
	cout<<(4&1)<<"omy";
    }
 
    return 0;
}

#include<bits/stdc++.h>

using namespace std;
 

int mod(string num, int a)
{
   
    int res = 0;
 
    for (int i = 0; i < num.length(); i++)
         res = (res*10 + num[i]-48) %a;
 
    return res;
}
 
int main()
{
    string num = "12316767678678";
    cout << mod(num, 10);
    return 0;
}
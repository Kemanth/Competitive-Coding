#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b){

	if(a == b)
		return a;
	else if(a>b)
		return gcd(a-b,b);
	else
		return gcd(a,b-a);

}

int lcm(int a,int b){

	return (a*b)/gcd(a,b);

}

int gcdArr(int arr[],int n){

	int ans = arr[0];

	for(int i=1;i<n;i++){
		ans = gcd(arr[i],ans);
	}

	return ans;
}

int lcmArr(int arr[],int n){

	int ans = arr[0];

	for(int i=1;i<n;i++){
		ans = lcm(arr[i],ans);
	}

	return ans;
}

int mod(string num, int a)
{
   
    int res = 0;
 
    for (int i = 0; i < num.length(); i++)
         res = (res*10 + num[i]-48) %a;
 
    return res;
}

int gcdLarge(string num,int n){ //reduce the large number to the scale of second number by taking mod with small number then just find gcd 

	return gcd(mod(num,n),n);
}

int main(){

	int a=15, b=20;
	int arr[] = {2, 7, 3, 9, 4};
	string num = "1234567891011121314151617181920212223242526272829";
	int n = 5;
	cout<<"GCD : "<<gcd(a,b)<<endl;
	cout<<"LCM : "<<lcm(a,b)<<endl;
	cout<<"GCDARR : "<<gcdArr(arr,n)<<endl;
	cout<<"LCMARR : "<<lcmArr(arr,n)<<endl;
	cout<<"GCD LARGE : "<<gcdLarge(num,1221)<<endl;
	return 0;
}
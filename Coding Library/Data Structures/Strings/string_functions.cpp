#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	string str="My name is Kemanth";

	cout<<str.length()<<endl;

	cout<<str.size()<<endl;

	cout<<str.empty()<<endl;

	cout<<str.append(" PJ")<<endl;

	cout<<str + "!!!" <<endl;

	cout<<str.append(10u,'.')<<endl;

 	cout<<str.insert(2," real")<<endl;

	cout<<str.insert(2," real",0,2)<<endl;	

	str.erase(2,7);

	cout<<str<<endl;

	str.erase(str.begin()+1);	

	cout<<str<<endl;

	cout<<str.replace(0,9,"Iam")<<endl;

	string s1="first";
	string s2="second";
	
	s1.swap(s2);

	cout<<s1<<" "<<s2<<endl;

	cout<<str<<endl;

	return 0;
}
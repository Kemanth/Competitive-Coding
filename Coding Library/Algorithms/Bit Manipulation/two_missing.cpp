#include<bits/stdc++.h>

using namespace std;

//https://www.youtube.com/watch?v=75Jrba2uGFM

vector<int>findmissingtwo(const vector<int> &A) {

	long long int sum = 0;
	int n = A.size();
	int total = n+2;

	for(int i=0;i<n;i++){
		sum+=A[i];
	}

	long long totalsum = total*(total+1)/2;

	long long int sumof2num = totalsum - sum;

	int pivot = sumof2num/2,temp1=0,temp2=0;

	for (int i = 1; i <= pivot; ++i)  // one of the number must be less than equal to pivot other greater so search for first element in left subarray
	{
		temp1 ^= i;
	}
	for (int i = 0; i < n; ++i) // xor of all elemnts less than or equal to pivot in given array
	{
		if(A[i]<=pivot){
			temp2 ^=A[i];
		}
	}

	int first = temp1 ^ temp2;
	int second = sumof2num - first;

	vector<int>results;
	results.push_back(first);
	results.push_back(second);

	return results;
}


int main(){

	vector<int>arr;
	arr.push_back(1);
	arr.push_back(3);
	arr.push_back(5);
	arr.push_back(6);
	vector<int>results;
    results = findmissingtwo(arr);
    cout<<results[0]<<" "<<results[1];
    return 0;
}
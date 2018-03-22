#include<bits/stdc++.h>

using namespace std;


struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};


bool comp(const Interval &a,const Interval &b)
{
    return a.start < b.start;
}

vector<Interval> mergeInterval(vector<Interval>A){

	sort(A.begin(),A.end(),comp);
	vector<Interval>results;
	
	results.push_back(A[0]);

	for(int i=1;i<A.size();i++){

		Interval last = results.back();
		
		if(last.end < A[i].start){    //no overlap
			results.push_back(A[i]);

		}
		else if(last.end < A[i].end){  //partial overlap
			last.end = A[i].end;
			results.erase(results.end());
			results.push_back(last);
		}  

	}

	return results;
}
int main(){

	vector<Interval>inp,results;

	inp.push_back(Interval(6,8));
	inp.push_back(Interval(1,9));
	inp.push_back(Interval(2,4));
	inp.push_back(Interval(4,7));

	results = mergeInterval(inp);

	for(int i=0;i<results.size();i++){
		cout<<results[i].start<<" "<<results[i].end<<endl;
	}

	return 0;
}
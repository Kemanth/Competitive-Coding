 
int Solution::removeDuplicates(vector<int> &A) {
    sort( A.begin(), A.end() );
    A.erase( unique( A.begin(), A.end() ), A.end() );
    return A.size();
}

int Solution::removeDuplicates(vector<int> &A) {
    if(A.size()==0)
        return A.size();
    int k = 0;
    for(int i=0;i<A.size()-1;i++){
        if(A[i]!=A[i+1]){
            A[k++]=A[i];
        }
    }
    A[k++]=A[A.size()-1];
    A.erase(A.begin()+ k,A.end());
    return A.size();
}

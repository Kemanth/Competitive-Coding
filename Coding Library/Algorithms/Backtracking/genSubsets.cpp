vector<vector<int> >ans;

void gensubsets(vector<int> &A,vector<int>set,int i) {
    if(i>=A.size()){
        sort(set.begin(),set.end());
        ans.push_back(set);
    }
    else{
        gensubsets(A,set,i+1);
        set.push_back(A[i]);
        gensubsets(A,set,i+1);
    }
}
vector<vector<int> > Solution::subsets(vector<int> &A) {
    /*
    int setsize = pow(2,A.size());
    vector<vector<int> >ans;
    for(int i=0;i<setsize;i++){
        vector<int>row;
        for(int j=0;j<A.size();j++){
            if(i & (1<<j)){
                row.push_back(A[j]);
            }
        }
        sort(row.begin(),row.end());
        ans.push_back(row);
    }*/
    vector<int>set;
    ans.clear();
    gensubsets(A,set,0);
    sort(ans.begin(),ans.end());
    return ans;
}

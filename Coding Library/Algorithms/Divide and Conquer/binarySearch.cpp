int binSearch(const vector<int> &A,int low,int high,int ele,bool lower){
    int mid;
    int res = -1;
    while(low <= high){
        mid = (low + high)/2;
        if(A[mid]==ele){
            res = mid;
            if(lower)
                high = mid-1;
            else
                low = mid+1;
        }
        else if(ele < A[mid]){
            high = mid-1;
        }
        else 
            low = mid+1;
    }
    return res;
}
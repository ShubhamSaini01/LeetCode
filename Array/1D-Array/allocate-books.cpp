
bool isAllocationPossible(vector<int> &A, int barrier, int noOfStudents){
    int students=1,pages=0;
    for(int i=0; i< A.size(); i++){
        if(A[i]>barrier) return false;
        if(pages+A[i]> barrier){
            students++;
            pages=A[i];    
        }
        else{
            pages+=A[i];
        } 

    }
    if(students > noOfStudents)
        return false;
    return true;
}
int Solution::books(vector<int> &A, int B) {
    if(B > A.size()) return -1;
    int high= 0; int low= A[0];
    int res = -1;
    for(auto i: A){
        low = min(low, i);
        high+=i;
    }
    while(low<=high){
        int mid = (high+low)/2;
       
            if(isAllocationPossible(A, mid, B)){
                res = mid;
                high=mid-1;                
            }
            else{
                low=mid+1;
            }
    }
        return res;

    
}


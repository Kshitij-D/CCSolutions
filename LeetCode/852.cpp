class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int n = A.size(), lo, hi, mid;
        
        lo = 0;
        hi = n - 1;
        //FFFTT 
        //Last F
        //uppermid
        //no sanity check req
        
        while(lo < hi){
            mid = lo + (hi - lo + 1)/2;
            
            if(A[mid] < A[mid - 1])
                hi = mid - 1;
            else
                lo = mid;
        }
        
            return lo;
    }
};

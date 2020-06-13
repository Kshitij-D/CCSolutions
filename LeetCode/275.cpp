class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size(), lo, hi, mid;
        if(n == 0)
            return 0;
        //BinarySeach
        //p(x) : a[x] >= n - i First T
        
        lo = 0;
        hi = n - 1;
        
        while(lo < hi){
            mid = lo + (hi - lo)/2;
            
            if(citations[mid] >= n - mid)
                hi = mid;
            else
                lo = mid + 1;
        }
        
        if(citations[lo] >= n - lo)
            return n - lo;
        return 0;
        
    }
};

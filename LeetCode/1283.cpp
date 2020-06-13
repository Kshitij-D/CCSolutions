class Solution {
public:
   int getSum(int x, vector<int>& nums){
       int n = nums.size(), sum = 0;
    
       for(int i = 0; i < n; i++ ){
           sum += ceil((float)nums[i]/x);
       }
       
       return sum;
   } 
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size(), lo, hi, mid;
        int maxN = INT_MIN;
        
        //BinarySearch
        //SearchSpace 1 to MAXN
        //p(x) : getSum(x) <= T
        // FFFTT First T
        
        for(int i = 0; i < n; i++){
            maxN = max(maxN, nums[i]);
        }
        
        lo = 1;
        hi = maxN;
        
        while(lo < hi){
            mid = lo + (hi - lo)/2;     //LowerMid
            
            if(getSum(mid, nums) <= threshold)
                hi = mid;
            else
                lo = mid + 1;
        }
        
        //no sanity check
        return lo;
        
    }
};

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size(), lo, mid, hi;
        //Binray search
        //p(x) : x  < nums[0]
        //FFFTTT 
        //First T
        
        lo = 0;
        hi = n - 1;
        
        if(n == 1) 
            return nums[0];
        
        if(nums[0] < nums[hi])
            return nums[0];
        
        while(lo < hi){
            mid = lo + (hi - lo)/2;     //lowermid
            
            if(nums[mid] < nums[0])
                hi = mid;
            else
                lo = mid + 1;
        }
        
        return nums[lo];
    }
};

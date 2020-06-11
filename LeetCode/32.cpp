class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size(), lo, hi, mid;
        vector<int> out;
        
        if(n == 0) return {-1, -1};
        //for 1st occ
        //p : x >= target
        //first T
        
        lo = 0;
        hi = n - 1;
        
        while(lo < hi){
            mid = lo + (hi - lo)/2;     //lowermid
            
            if(nums[mid] >= target)
                hi = mid;
            else
                lo = mid + 1;           
        }
        
        if(nums[lo] != target)    //sanityCheck
            return {-1, -1};
        out.push_back(lo);
        
        //for last occ
        //p : x > target
        // last F
        
        lo = 0;
        hi = n - 1;
        
        while(lo < hi){
            mid = lo + (hi - lo + 1)/2;     //uppermid
            
            if(nums[mid] > target)
                hi = mid - 1;
            else
                lo = mid;
        }
        
        out.push_back(lo);
        return out;
    }
};

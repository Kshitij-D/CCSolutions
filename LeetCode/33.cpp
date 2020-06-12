class Solution {
public:
    int BinarySearch(vector<int>& nums, int lo, int hi, int T){
        //Binary Search for T
        //p(x) : x > T
        //FFFTT
        //Last F
        int mid;
        
        while(lo < hi){
            mid = lo + (hi - lo + 1)/2;     //uppermid
            
            if(nums[mid] > T)
                hi = mid - 1;
            else
                lo = mid;
        }
        
        if(nums[lo] != T)
            return -1;
        return lo;
        
    }
    
   
    int search(vector<int>& nums, int target) {
        int n = nums.size(), lo, hi, mid;
            
        //Binary Search for pivot
        //p(x) : x < nums[0]
        // First T
        // FFFTTT
        
        lo = 0;
        hi = n - 1;
        
        if(n == 0)      //empty array
             return -1;
        
        while(lo < hi){
            mid = lo + (hi - lo)/2;     //lowermid
            
            if(nums[mid] < nums[0])
                hi = mid;
            else
                lo = mid + 1;
        }
        
        
        if(lo == 0)
           return BinarySearch(nums, lo, n - 1, target);
        
        int fSearch = BinarySearch(nums, 0, lo - 1 , target);
        
        if(fSearch != -1)
            return fSearch;
        else
            return BinarySearch(nums, lo, n - 1, target);
    
        }
    
    
};

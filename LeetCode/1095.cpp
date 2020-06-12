/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int BinarySearch(int lo, int hi, int T, MountainArray &mountainArr){
        //p(x) : x > T
        //asc part FFFTT i.e Last F
        
        while(lo < hi){
            int mid = lo + (hi - lo + 1)/2;     
            
            if(mountainArr.get(mid) > T)
                hi = mid - 1;
            else
                lo = mid;   //uppermid
            
            }
        
        if(mountainArr.get(lo) != T){       //SanityCheck
            return -1;
            }
            
            return lo;
        
        
        
        
    }
    
    int BinarySearch2(int lo, int hi, int T, MountainArray &mountainArr){
        //p(x) : x !>= T
        //Des part FFTTT i.e Last F
        
        while(lo < hi){
            int mid = lo + (hi - lo + 1)/2;
            
            if(!(mountainArr.get(mid) >= T))
                hi = mid - 1;
            else
                lo = mid;
            
            }
        
        if(mountainArr.get(lo) != T){       //SanityCheck
            return -1;
            }
            
            return lo;
        
        
        
        
    }
                     
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length(), lo, hi, mid;
        //Binary Search
        //p(x) : x(i) < x(i - 1)
        //FFFTT
        //Last F
        
        if(n == 0)
            return -1;
        
        lo = 0;
        hi = n - 1;
        
        while(lo < hi){
            mid = lo + (hi - lo + 1)/2;     //uppermid
            
            if(mountainArr.get(mid) < mountainArr.get(mid - 1))
                hi = mid - 1;
            else
                lo = mid;
        }
        
        int fSearch = BinarySearch(0, lo, target, mountainArr);
        
        if(fSearch == -1)
            return BinarySearch2(lo + 1, n - 1, target, mountainArr);
       return fSearch;
    }
};

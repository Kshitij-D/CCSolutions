class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int ro = matrix.size();
        if(ro == 0)
            return false;
        
        int co = matrix[0].size();
        if(co == 0)
            return false;
        
        int lo, hi, mid;
        //BinarySearch
        //indexconversion row = mid/r; column = mid % c;
        //FFFTTT
        //P(x) : x > T Last F
        
        
            
        lo = 0;
        hi = ro * co - 1;
        
        while(lo < hi){
            mid = lo + (hi - lo + 1)/2;
            
            if(matrix[mid / co][mid % co] > target)
                hi = mid - 1;
            else 
                lo = mid;
        }
        
        if(matrix[lo / co][lo % co] == target)
            return true;
        return false;
        
    }
};

class Solution {
public:
    int getShipTime(int capacity, vector<int>& weights){
        
        int days = 0;
        int sum = 0;
        int n = weights.size();
        
        for(int i = 0; i < n; i++){
            if(sum + weights[i] <= capacity){
                sum += weights[i];
            }
            
            else{
                days++;
                sum = weights[i];
            }
        }
        
        return days + 1;
    }
    
    int shipWithinDays(vector<int>& weights, int D) {
        int n = weights.size(), lo, mid, hi, maxW, sumW;
        
        //BinarySearch
        //p(x) : shipTime(x) <= D
        //FFFTTT First T
        //SearchSpace : maxW, sumW
      
        sumW = 0;
        maxW = INT_MIN;
        
        for(int i = 0; i < n; i++){
            maxW = max(weights[i], maxW);
            sumW += weights[i];
        }
        
        lo = maxW;
        hi = sumW;
        
        while(lo < hi){
            mid = lo + (hi - lo)/2;
            
            if(getShipTime(mid, weights) <= D)
                hi = mid;
            else
                lo = mid + 1;
        }
        
        return lo;
    }
};

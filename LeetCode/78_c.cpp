class Solution {
public:
    
    void f(vector<int>& nums, int startIdx, vector<vector<int>>& res, vector<int> crntSet){
        //BaseCase
        
        if(startIdx == nums.size()){
            res.push_back(crntSet);
            return;
        }
            
      
        //Exclude

        f(nums, startIdx + 1, res, crntSet);
                
        //Include
        crntSet.push_back(nums[startIdx]);
        f(nums, startIdx + 1, res, crntSet);        
      
        return;
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> crntSet;
        
        f(nums, 0, res, crntSet);
        
        return res;
    }
};

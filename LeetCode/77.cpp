class Solution {
public:
    
    void f(vector<int>& nums, int startIdx, int k, vector<vector<int>>& res, vector<int> crntSet){
        //BaseCase
        int n = nums.size();
        
        if(k == 0){
            res.push_back(crntSet);
            return;
        }
        
        if(startIdx == n){        
            return;
        }
        
        //Pruning
        if(k > n - startIdx)
            return;
        
        //pruning in loop for impossible tree branches
        
        for(int i = startIdx; i < n - k + 1 ; i++){
            
            crntSet.push_back(nums[i]);
            f(nums, i + 1, k - 1, res, crntSet);
            crntSet.pop_back();
        }
        
        return;
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<int> nums;
        vector<vector<int>> res;
        vector<int> crntSet;
        
        for(int j = 1; j < n + 1; j++){
            nums.push_back(j);
        }
        
        f(nums, 0, k, res, crntSet);
        
        return res;
    }
};

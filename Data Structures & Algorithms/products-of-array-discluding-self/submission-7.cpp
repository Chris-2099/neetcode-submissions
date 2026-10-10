class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        if(nums.empty()) return {}; 
        // iterate through array and determine product
        int product = 1;
        int zeroCount = 0;
        for(int num : nums){
            if(num == 0) zeroCount++;
            else product *= num;
        }

        if(zeroCount>1) return vector<int>(nums.size(),0);
        // determine product except self
        vector<int> result;
        for(int i = 0; i < nums.size(); i++){
            if(zeroCount == 0) 
                result.push_back(product/nums[i]); 
            else {
                if(nums[i] == 0) 
                    result.push_back(product);
                else 
                    result.push_back(0);
            }
        }
        return result;
    }
};

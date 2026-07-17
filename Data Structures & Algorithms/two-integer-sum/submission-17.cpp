class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> pastNums;
       for(int i = 0; i < nums.size(); i++){
        int x = target - nums[i];
        if(pastNums.contains(x)){
            return {pastNums[x], i};
        }
        pastNums[nums[i]] = i;
       } 
       return {};
    }
};

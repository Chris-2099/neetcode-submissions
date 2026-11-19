class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.empty()) return {};
        std::sort(nums.begin(),nums.end());
        
        vector<vector<int>> result;
        for(int i = 0; i < nums.size(); i++){
            int x = nums[i];
            if(x > 0) 
                break;
            else if (i > 0 && nums[i] == nums[i-1])
                continue;

            int l = i+1, r = nums.size()-1;
            while(l < r){
                int sum = x + nums[l] + nums[r];
                if(sum > 0) 
                    r--;
                else if(sum < 0) 
                    l++;
                else {
                    result.push_back({x,nums[l],nums[r]});
                    l++, r--;

                    // handle duplicates
                    while(l < r && nums[l] == nums[l-1])
                        l++;
                    while(l < r && nums[r] == nums[r+1])
                        r--;
                }
            }
        }
        return result;
    }
};

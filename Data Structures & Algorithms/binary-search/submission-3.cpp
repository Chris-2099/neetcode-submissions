class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size() == 0) return false;

        int l = 0, r = nums.size()-1;
        while(l <= r){
            int i = l+((r-l)/2);
            int pivot = nums[i];

            if(pivot > target) r = i-1;
            else if(pivot < target) l = i+1;
            else return i;
        }
        return -1;
    }
};

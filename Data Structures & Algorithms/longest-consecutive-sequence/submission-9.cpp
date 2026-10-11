class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        unordered_set<int> seen(nums.begin(), nums.end());

        int count = 1;
        for (int num : seen) {
            // not the start of the sequence
            if(seen.contains(num-1)) continue;
            int cur = 1;
            
            // found start of sequence; walk upwards tracking count
            while(seen.contains(num+cur)){
                cur++;
            }
            count = max(count,cur);
        }
        return count;
    }
};

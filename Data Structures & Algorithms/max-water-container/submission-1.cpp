class Solution {
public:
    int maxArea(vector<int>& heights) {
        // need at least 2 bars for container
        if(heights.empty() || heights.size() < 1) return 0;

        // find max container
        // area = height * distance
        int m = 0;
        int l = 0, r = heights.size()-1;
        while(l < r){
            int a = min(heights[l],heights[r]) * (r - l);
            m = max(m,a);

            if(heights[l] < heights[r]) l++;
            else r--;
        }

        return m;
    }
};

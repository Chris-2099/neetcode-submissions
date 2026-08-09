class Solution {
public:
    // nums - array
    // k - int; target value
    // return top k elements in freqency
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int,int> tracker;
        // iterate array and track frequency
        for(int x : nums)
            tracker[x]+=1;
        // sort map by frequency
        vector<pair<int,int>> sortedMap(tracker.begin(),tracker.end());
        sort(sortedMap.begin(), sortedMap.end(), [](const auto& a, const auto& b) {
            return a.second > b.second;
        });
        // add val to result until k elements
        for(int i = 0; i < k; i++){
            result.push_back(sortedMap[i].first);
        }
        return result;
    }
};

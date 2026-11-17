class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // result[i] = number of days before a warmer day 
        // temp per day -> temperatures[i]
        vector<int> result(temperatures.size());
        stack<pair<int,int>> st;    // <temperature,index>

        for(int i = 0; i < temperatures.size(); i++){
            while(!st.empty() && temperatures[i] > st.top().first){
                auto temp = st.top();
                st.pop();
                result[temp.second] = i - temp.second;
            }
            st.push({temperatures[i], i});
        }

        return result;
    }
};

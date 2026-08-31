class Solution {
public:
    // take a list of strings and return single encoded string
    string encode(vector<string>& strs) {
        string result = "";
        if(strs.empty()) return result;
        // encode logic
        for(string str : strs){
            result.append(to_string(str.size()));
            result.push_back('#');
            result.append(str);
        }
        return result;
    }   

    // take encoded string and decipher list of strings
    vector<string> decode(string s) {
        vector<string> result;
        if(s.empty()) return result;
        // decode logic
        int i = 0;
        while(i < s.size()){
            // find the limiter
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            // get length
            int len = stoi(s.substr(i, j - i));
            i = j+1;
            j = i+len;
            // get string
            result.push_back(s.substr(i, len));
            i = j;
        }
        return result;
    }
};

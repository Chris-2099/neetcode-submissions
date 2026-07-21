class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.size()-1;
        while(l < r){
            // skip over non-alphanumeric chars
            while(!isalnum(s[l]) && l<r) l++;
            while(!isalnum(s[r]) && r>l) r--;
            
            // check if matching
            if(tolower(s[l]) != tolower(s[r])) return false;
            l++; r--;
        }

        return true;
    }
};

class Solution {
public:
    bool isValid(string s) {
        if(s.size() < 2) return false;

        stack<char> st;
        for(char c : s){
            if(c == ')' && !st.empty()){
                if(st.top() != '(') return false;
                st.pop();
            } else if(c == '}' && !st.empty()){
                if(st.top() != '{') return false;
                st.pop();
            } else if(c == ']' && !st.empty()){
                if(st.top() != '[') return false;
                st.pop();
            } else {
                st.push(c);
            }
        }

        return st.empty();
    }
};

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        set<string> operands = {"+","-","*","/"};

        for(string str : tokens){
            // handle operands and do operations
            if(operands.contains(str)){ 
                // get last two values
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();

                // operations
                if(str == "+") st.push(a+b); 
                else if(str == "-") st.push(a-b); 
                else if(str == "*") st.push(a*b); 
                else if(str == "/") st.push(a/b); 
            } 
            // handle number
            else { st.push(stoi(str)); }
        }
        return st.top();
    }
};

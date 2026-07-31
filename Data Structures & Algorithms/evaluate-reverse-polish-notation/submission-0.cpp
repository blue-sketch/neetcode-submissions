class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (auto& tok : tokens) {
            if (tok == "+" || tok == "-" || tok == "*" || tok == "/") {
                int b = st.top(); st.pop();   
                int a = st.top(); st.pop();   
                int result = 0;
                if (tok == "+") result = a + b;
                else if (tok == "-") result = a - b;
                else if (tok == "*") result = a * b;
                else if (tok == "/") result = a / b;
                st.push(result);
            } else {
                st.push(stoi(tok));   
            }
        }

        return st.top();
    }
};
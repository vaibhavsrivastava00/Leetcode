class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            char ch = s[i];
            if (ch == '[' || ch == '{' || ch == '(') {
                st.push(ch);
            } else if (ch == ']' || ch == '}' || ch == ')') {
                if (st.empty()) return false; // Check if stack is empty
                if ((ch == ']' && st.top() != '[') || 
                    (ch == '}' && st.top() != '{') || 
                    (ch == ')' && st.top() != '(')) {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};

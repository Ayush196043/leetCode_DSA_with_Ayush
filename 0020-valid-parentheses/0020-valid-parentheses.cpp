class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char ch : s) {

            // Opening brackets
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }

            // Closing brackets
            else {
                // Stack empty means no opening bracket
                if (st.empty()) {
                    return false;
                }

                // Check matching bracket
                if (ch == ')' && st.top() != '(') {
                    return false;
                }

                if (ch == '}' && st.top() != '{') {
                    return false;
                }

                if (ch == ']' && st.top() != '[') {
                    return false;
                }

                // Remove matched opening bracket
                st.pop();
            }
        }

        // Valid only when stack is empty
        return st.empty();
    }
};
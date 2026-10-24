class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int additions = 0;

        for (char c : s) {
            if (c == '(') {
                st.push(c);
            } else if (!st.empty()) {
                st.pop();  // Match this ')' with an '('
            } else {
                ++additions; // Need to insert a matching '('
            }
        }

        return additions + st.size(); // Remaining '(' need matching ')'
    }
};
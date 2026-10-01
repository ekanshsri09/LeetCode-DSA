class Solution {
public:
    bool isValid(string s) {
        stack<char> expected;

        for (char c : s) {
            if (c == '(') expected.push(')');
            else if (c == '[') expected.push(']');
            else if (c == '{') expected.push('}');
            else {
                if (expected.empty() || expected.top() != c) {
                    return false;
                }
                expected.pop();
            }
        }

        return expected.empty();
    }
};
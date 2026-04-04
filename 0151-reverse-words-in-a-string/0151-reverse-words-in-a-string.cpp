class Solution {
public:
    string reverseWords(string s) {
        stack<char> st;
        string ans = "";
        int n = s.size();
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                st.push(s[i]);
            } else {
                if (!st.empty()) {
                    while (!st.empty()) {
                        ans.push_back(st.top());
                        st.pop();
                    }
                    ans.push_back(' ');
                }
            }
        }
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        if (!ans.empty() && ans.back() == ' ')
            ans.pop_back();
        return ans;
    }
};
class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        string ans = "";
        for (auto c : s)
        {
            if(st.empty())
            {
                st.push(c);
            }
            else
            {
                if(c == '(')
                {
                    st.push(c);
                    ans.push_back(c);
                }
                else
                {
                    if (st.top() == '(')
                    {
                        st.pop();
                        if(!st.empty())
                        {
                            ans.push_back(c);
                        }
                    }
                }

            }
        }
            return ans;
    }
};
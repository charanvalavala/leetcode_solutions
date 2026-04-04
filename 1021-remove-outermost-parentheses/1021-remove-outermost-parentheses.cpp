class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int counter =  0;
        for (auto c : s)
        {
            if(c == '(')
            {
                if(counter>0)ans.push_back(c);
                counter++;
            }
            else
            {
                if(counter>1)ans.push_back(c);
                counter--;
            }
        }
        return ans;
    }
};
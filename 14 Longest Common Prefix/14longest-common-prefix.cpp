class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = "";
        int a = strs[0].length();
        int b = strs.size();
        for(int i=0; i < a; i++)
        {
            char c = strs[0][i];
            for(int j =1; j< b; j++)
            {
                if(strs[j][i] != c)
                {
                    return s;
                }
            }
            s += c;
        }
        return s;
    }
};
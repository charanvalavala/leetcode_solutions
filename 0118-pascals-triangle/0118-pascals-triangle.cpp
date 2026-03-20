class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i =1;i<=numRows;i++)
        {
            vector<int>tmp(i,1);
            ans.emplace_back(tmp);
        }
        for(int i =3;i<=numRows;i++)
        {
            for(int j =1;j<i-1;j++)
            {
                ans[i-1][j]=ans[i-2][j-1]+ans[i-2][j];
            }
        }
        return ans;
    }
};
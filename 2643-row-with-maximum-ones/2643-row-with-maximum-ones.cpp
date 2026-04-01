class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<int>ans(n,0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==1)
                {
                    ans[i]++;
                }
            }
        }
        vector<int>fin(2,0);
        for(int i=0;i<n;i++)
        {
            if(ans[i]>fin[1])
            {
                fin[0]=i;
                fin[1]=ans[i];
            }
        }
        return fin;
    }
};
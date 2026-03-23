class Solution {
public:
    int maxProductPath(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<long long>> max_grid(m,vector<long long>(n,0));
        vector<vector<long long>> min_grid(m,vector<long long>(n,0));
        int mod = 1e9+7;
        max_grid[0][0]=grid[0][0];
        min_grid[0][0]=grid[0][0];

        for(int i=1;i<m;i++)
        {
            max_grid[i][0]=grid[i][0]*max_grid[i-1][0];
            min_grid[i][0]=grid[i][0]*min_grid[i-1][0];
        }
        for(int i=1;i<n;i++)
        {
            max_grid[0][i]=grid[0][i]*max_grid[0][i-1];
            min_grid[0][i]=grid[0][i]*min_grid[0][i-1];
        }
        for(int i =1;i<m;i++)
        {
            for(int j =1;j<n;j++)
            {
                int val = grid[i][j];
                long long maxup = val*max_grid[i-1][j];
                long long minup = val*min_grid[i-1][j];
                long long maxside = val*max_grid[i][j-1];
                long long minside = val*min_grid[i][j-1];
                
                max_grid[i][j]=max({maxup,minup,maxside,minside});
                min_grid[i][j]=min({maxup,minup,maxside,minside});
            }
        }
        long long ans = max_grid[m-1][n-1];
        if (ans <0){
            return -1;
        }
        return ans%mod;

    }
};
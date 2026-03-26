class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        if(checkHorizontal(grid))return true;
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>>transposed(n,vector<int>(m,0));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                transposed[j][i]=grid[i][j];
            }
        }
        return checkHorizontal(transposed);
    }

    bool checkHorizontal(vector<vector<int>>& grid)
    {
        int m = grid.size();
        int n = grid[0].size();
        long long total_weight =0;
        long long bot_weight =0;
        long long top_weight =0;
        vector<int>bot_freq(100001,0);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                total_weight += grid[i][j];
                bot_freq[grid[i][j]]++;
            }
        }
        bot_weight = total_weight;
        vector<int>top_freq(100001,0);
        for(int i=0;i<m-1;i++)
        {
            for(int j=0;j<n;j++)
            {
                int a = grid[i][j];
                top_weight+=a;
                bot_weight-=a;
                top_freq[a]++;
                bot_freq[a]--;
            }
            long long diff = top_weight-bot_weight;
            if(diff ==0)return true;
            long long absDiff = abs(diff);
            if (absDiff > 100000) continue;
            int d = (int)absDiff;

            if(diff >0)
            {
                bool single_cell = (i==0 && n ==1);
                if(single_cell)continue;
                bool is_id = (i == 0 || n==1);
                if(is_id)
                {
                    if(i==0 &&(grid[0][0]==d || grid[0][n-1]==d))return true;
                    if(n==1 &&(grid[0][0]==d || grid[i][0]==d))return true;
                }
                else
                {
                    if(top_freq[d]>0)return true;
                }
            }
            else
            {
                bool single_cell = (i==m-2 && n ==1);
                if(single_cell)continue;
                bool is_id = (i == m-2 || n==1);
                if(is_id)
                {
                    if(i==m-2 &&(grid[m-1][0]==d || grid[m-1][n-1]==d))return true;
                    if(n==1 &&(grid[m-1][0]==d || grid[i+1][0]==d))return true;
                }
                else
                {
                    if(bot_freq[d]>0)return true;
                }

            }

        }
        return false;

    }
};
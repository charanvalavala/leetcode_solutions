class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<long long>rows(m,0);
        vector<long long>column(n,0);
        long long sum =0;
        for(int i =0;i<m;i++)
        {
            for(int j =0 ;j<n;j++)
            {
                rows[i] +=grid[i][j];
                column[j] += grid[i][j];
                sum += grid[i][j];
            }
        }
        if(sum %2 !=0)
        {
            return false;
        }
        long long target = sum/2;
        long long rowsum =0;
        for(int i=0;i<m-1;i++)
        {
            rowsum += rows[i];
            if(rowsum == target)
            {
                return true;
            }
        }

        long long colsum =0;
        for(int i=0;i<n-1;i++)
        {
            colsum += column[i];
            if(colsum == target)
            {
                return true;
            }
        }
        return false;


    }
};
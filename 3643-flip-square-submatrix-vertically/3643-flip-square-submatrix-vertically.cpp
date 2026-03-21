class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        if(k<=1)return grid;
        for(int off =0; off<k/2;off++)
        {
            int top = x+off;
            int bottom = x+k-1-off;
            for(int j =y; j<y+k;j++)
            {
                swap(grid[top][j],grid[bottom][j]);
            }
        }
        return grid;
    }
};
class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int low = 0;
        int high = n-1;
        while(low<=high)
        {
            int mid = low +(high-low)/2;
            int ind = findGreat(mat,m,n,mid);
            int left  = mid-1 >= 0 ? mat[ind][mid-1] : -1;
            int right = mid+1 <  n ? mat[ind][mid+1] : -1;
            if (left < mat[ind][mid] && mat[ind][mid] > right)
            {
                return {ind,mid};
            }
            else if(mat[ind][mid]>left)
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
        return {-1,-1};
    }

    int findGreat(vector<vector<int>>& mat,int m,int n,int mid)
    {
        int maxIndex =  -1;
        int maxNum = -1;
        for(int i=0;i<m;i++)
        {
            if(mat[i][mid]>maxNum)
            {
                maxNum = mat[i][mid];
                maxIndex = i;
            }
        }
        return maxIndex;

    }
};
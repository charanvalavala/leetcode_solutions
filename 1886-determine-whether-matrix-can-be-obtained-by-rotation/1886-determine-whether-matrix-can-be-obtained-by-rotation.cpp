class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();
        int i=4;

        while(i>=1)
        {
                int counter =0;
            for(int j=0;j<n;j++)
            {
                for(int k =0;k<n;k++)
                {
                    if(mat[j][k]!=target[j][k])
                    {
                        counter =1;
                        break;
                    }
                }
            }
            if(counter==0)return true;
            for(int j =0 ;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    swap(mat[j][k],mat[k][j]);
                }
            }
            for(int a =0;a<n;a++)
            {
                reverse(mat[a].begin(),mat[a].end());
            }
            i--;
        }
        return false;
    }
};
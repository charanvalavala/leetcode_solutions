class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxRow = 0;
        int maxOnes = 0;
        
        for (int i = 0; i < mat.size(); i++) {
            int currentOnes = 0;
            for (int j = 0; j < mat[0].size(); j++) {
                if (mat[i][j] == 1) {
                    currentOnes++;
                }
            }
            if (currentOnes > maxOnes) {
                maxOnes = currentOnes;
                maxRow = i;
            }
        }
        
        return {maxRow, maxOnes}; 
    }
};
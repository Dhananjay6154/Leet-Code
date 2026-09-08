class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        vector<bool> rowMat(row, false);
        vector<bool> colMat(col, false);

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(matrix[i][j] == 0)
                {
                    rowMat[i] = true;
                    colMat[j] = true;
                }
            }
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(rowMat[i] || colMat[j])
                {
                    matrix[i][j] = 0;
                }
            }
        }
        
    }
};
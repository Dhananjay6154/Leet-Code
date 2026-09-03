class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n = mat.size();   //Row 
        int m = mat[0].size();   //Column 
        int x = 0;
        int y = 0;
        vector<vector<int>> ans(r, vector<int>(c));
        if(n * m != r * c)
        {
            return mat;
        }

        for(int i=0;i<n;i++)
        {

            for(int j=0;j<m;j++)
            {
                ans[x][y] = mat[i][j];
                y++;
                if(y == c)
                {
                    y=0;
                    x++;
                }
            }
        }
        return ans;

    }
};
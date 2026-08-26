class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int row = 0;
        int col = 0;
        for(int i=row;i<image.size();i++)
        {
            reverse(image[i].begin(),image[i].end());
            for(int j=col;j<image[0].size();j++)
            {
                if(image[i][j] == 0)
                {
                    image[i][j] = 1;
                }
                else{
                    image[i][j] = 0; 
                }
            }
        }
        return image;      
    }
};
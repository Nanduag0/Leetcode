class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) 
    {
        int row = image.size();
        int col = image[0].size();
        
        for(int i=0;i<row;i++)
        {
            vector<int> v = image[i];
            reverse(v.begin(), v.end());
            image[i]  = v;   
        }
        
         for(int i=0;i<row;i++)
         {
             for(int j=0;j<col;j++)
             {
                 if(image[i][j] == 1)
                     image[i][j] = 0;
                 else
                     image[i][j] = 1;
             }
         }
        return image;
    }
};
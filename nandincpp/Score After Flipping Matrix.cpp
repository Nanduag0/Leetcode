class Solution {
    
    int x(vector<vector<int>>& grid)
    {
        int sum = 0;
        for(int i=0;i<grid.size();i++) 
        {
            int power = 0;
            for(int j=grid[0].size()-1;j>=0;j--) 
            {
                sum += grid[i][j] * pow(2, power);
                power++;
            }
        }
        
        return sum;
    }
    
public:
    int matrixScore(vector<vector<int>>& grid)
    {
        for(int i=0;i<grid.size();i++)
        {
            if(grid[i][0] == 0)
            {
                for(int j=0;j<grid[i].size();j++)
                    grid[i][j] = grid[i][j] ^ 1;
            }
        }
        
        for(int j=0;j<grid[0].size();j++)
        {
            int one = 0;
            int zero = 0;
            
            for(int i=0;i<grid.size();i++)
            {
                if(grid[i][j] == 0)
                    zero++;
                else
                    one++;
            }
            
            if(zero > one)
            {
                for(int i=0;i<grid.size();i++)
                    grid[i][j] ^= 1; 
            }
        }
        
        return x(grid);
    }
};
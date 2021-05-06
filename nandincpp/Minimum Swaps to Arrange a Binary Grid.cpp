class Solution {
public:
    int minSwaps(vector<vector<int>>& grid)
    {
        vector<int>akhon;
        
        for(int i=0;i<grid.size();i++)
        {
            int count = 0;
            
            for(int j = grid[i].size()-1;j>=0;j--)
            {
                if(grid[i][j] == 0)
                    count++;
                else
                    break;
            }
            
            akhon.push_back(count);
        }
        
        int ans = 0;        
        for(int i=0;i<grid.size();i++)
        {
            int k = i;
            int koto = grid.size()-i-1;
            
            while(k<grid.size() && akhon[k]<koto)
            {
                k++;
            }
            
            if(k==grid.size())
                return -1;
            
            ans += k-i;
            
            while(k > i)
            {
                akhon[k] = akhon[k-1];
                k--;
            }
        }    
        
        return ans;
    }
};
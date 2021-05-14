class Solution {
public:
    int countServers(vector<vector<int>>& m) 
    {
        int ans = 0;
        vector<int> row(m.size()+1, 0), col(m[0].size()+1, 0);
        
        for(int i=0;i<m.size();i++)
        {
            int temp = 0;
            for(int j=0;j<m[0].size();j++)
            {
                if(m[i][j] == 1)
                    row[i]++, col[j]++;
            }
        }
        
       for(int i=0;i<m.size();i++)
       {
           for(int j=0;j<m[0].size();j++)
           {
               if(m[i][j]==1 && (row[i]>1 || col[j]>1))
                   ans++;
           }
       }
        
        return ans;
    }
};
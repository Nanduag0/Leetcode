class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box)
    {
        for(int i=0;i<box.size();i++)
        {
            for(int j=box[i].size()-1;j>=0;j--)
            {
                if(box[i][j] == '#')
                {
                    int temp = j;
                    while(temp<box[i].size()-1 && box[i][temp+1]=='.')
                        temp++;
                    
                    box[i][temp] = '#';
                    if(j != temp)
                    box[i][j] = '.';
                }
            }
        }
        
        vector<vector<char>> ans(box[0].size(), vector<char> (box.size()));
        for(int i=0;i<box.size();i++)
        {
            for(int j=0;j<box[0].size();j++)
            {
                ans[j][i] = box[i][j];
            }
        }
        
        for(int i=0;i<ans.size();i++)
        {
            reverse(ans[i].begin(), ans[i].end());
        }
        return ans;
    }
};
class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) 
    {
        map<int, vector<int>> m;
        // 3 -> 0,1,2,3,4,6
        // 1 -> 5
        
        for(int i=0;i<groupSizes.size();i++)
        {
            m[groupSizes[i]].push_back(i);
        }
        
        vector<int> temp;
        vector<vector<int>> ans;
        
        for(auto i : m)
        {
            for(auto j : i.second)
            {
                temp.push_back(j);
                
                if(temp.size() == i.first)
                {
                    ans.push_back(temp);
                    temp.clear();
                }
            }
        }
        
        return ans;
    }
};
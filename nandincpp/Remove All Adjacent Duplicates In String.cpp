class Solution {
public:
    string removeDuplicates(string s)
    {
        vector<pair<int, char>> v;
        
        for(auto c : s)
        {
            if(v.size()==0 || v.back().second!=c)
            {
                v.push_back({0, c});
            }
            
            if(++v.back().first == 2)
                v.pop_back();
        }
        
        string ans;
        for(auto &i : v)
            ans.append(i.first, i.second);
        
        return ans;
    }
};
class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& a1, vector<int>& a2, vector<int>& a3) 
    {
        unordered_map<int, int> mp;
        unordered_set<int> s1, s2, s3;
        vector<int> ans;
        
        for(auto i : a1)
            s1.insert(i);
        for(auto i : a2)
            s2.insert(i);
        for(auto i : a3)
            s3.insert(i);
        
        for(auto i : s1)
            mp[i]++;
        for(auto i : s2)
            mp[i]++;
        for(auto i : s3)
            mp[i]++;     

        
        for(auto i : mp)
        {
            if(i.second >= 2)
                ans.push_back(i.first);
        }
        
        return ans;
    }
};
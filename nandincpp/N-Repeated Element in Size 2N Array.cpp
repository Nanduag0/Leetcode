class Solution {
public:
    int repeatedNTimes(vector<int>& A) 
    {
        unordered_map<int,int>mp;
        int result;

    for(auto x:A)
    {
        mp[x]++;
    }
    for(auto y:mp)
    {
        if(y.second>1)
        {
           result=y.first; 
        }
    }
    return result;
    }
};

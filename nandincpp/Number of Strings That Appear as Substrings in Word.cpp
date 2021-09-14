class Solution {
public:
    int numOfStrings(vector<string>& p, string word) 
    {
        int ans = 0;
        for(auto i : p)
        {
            if(word.find(i) != string::npos)
                ans++;
        }
        
        return ans;
    }
};
class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) 
    {
        unordered_set<string> repe, seen;
        
        if(s.size() <= 10)
            return {};
        
        for(int i=0;i<s.size()-9;i++)
        {
            string x = s.substr(i, 10);
            
            if(seen.count(x))
                repe.insert(x);
            
            seen.insert(x);
        }
        
        vector<string> ans;
        for(auto i=repe.begin();i!=repe.end();i++)
            ans.push_back(*i);
        
        return ans;
    }
};
class Solution {
public:
    vector<string> getFolderNames(vector<string>& names) 
    {
        unordered_map<string, int> m;
        vector<string> ans;
        int n = names.size();
        
        for(int i=0;i<n;i++)
        {
            if(m.count(names[i]))
            {
                while( m.count( names[i]+'('+to_string(m[names[i]])+')' ) )
                    m[names[i]]++;
                
                ans.push_back(names[i]+'('+to_string(m[names[i]])+')');
                m[names[i]+'('+to_string(m[names[i]])+')']++;
            }
            
            else
            {
                ans.push_back(names[i]);
                m[names[i]]++;
            }
        }
        
        return ans;
    }
};
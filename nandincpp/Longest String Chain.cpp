class Solution {
    vector<vector<int>> edges;
    vector<int> v;
   
    
public:
     
    int longg(int a)
    {
        if(v[a] > 0)
            return v[a];
        
        v[a] = 1;
        for(auto x : edges[a])
        {
            v[a] = max(v[a], longg(x) + 1);
        }
        return v[a];
    }
    
    int longestStrChain(vector<string>& words)
    {
        unordered_map<string, int> position;
        const int n = words.size();
        
        for(int i=0;i<n;i++)
            position[words[i]] = i;
        
        edges.clear();
        v.clear();
        edges.resize(n);
        v.resize(n);
        
        for(int i=0;i<n;i++)
        {
            string s = words[i];
            for(int j=0;j<s.size();j++)
            {
                string now = s.substr(0, j) + s.substr(j+1);
                
                auto it = position.find(now);
                if(it == position.end())
                    continue;
                
                edges[it->second].push_back(i);
            }
        }
        
        int ans = 0;
        for(int i=0;i<n;i++)
            ans = max(ans, longg(i));
        
        return ans;
    }
};
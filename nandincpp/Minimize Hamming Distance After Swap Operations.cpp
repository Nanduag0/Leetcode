class Solution {
public:
    vector<int> par;
    
    int get_sp(int x) 
    {
        if (par[x] == x)
        {
            return x;
        }
        return par[x] = get_sp(par[x]);
    }
    
    void unionFind(int x, int y) 
    {
        int a = get_sp(x);
        int b = get_sp(y);
        
        if(a != b)
            par[b] = a;
    }
    
    int minimumHammingDistance(vector<int>& source, vector<int>& target, vector<vector<int>>& allowedSwaps)
    {
        int n = source.size();
        par.resize(n);
        
        for (int i =0;i<source.size();i++) 
        {
            par[i] = i;
        }
        
        for (auto edge : allowedSwaps) 
        {
            int a = edge[0];
            int b = edge[1];
            unionFind(a, b);
        }
        
        unordered_map<int, unordered_map<int, int>> mp;
        
        for (int i =0;i<n;i++)
            mp[get_sp(i)][source[i]]++;
        for (int i = 0;i<n;i++)
            mp[get_sp(i)][target[i]]--;
        
        int ans = 0;
        for (auto m : mp) 
        {
            
            for (auto s : m.second) 
            {
                ans += abs(s.second);
            }
            
        }
        
        return ans/2;        
    }
};
class Solution {
    vector<int> par;
    
    int get_sp(int x) 
    {
        if (par[x] == x)
        {
            return x;
        }
        return par[x] = get_sp(par[x]);
    }
    
    void unite(int x, int y) 
    {
        int a = get_sp(x);
        int b = get_sp(y);
        
        if(a != b)
            par[b] = a;
    }
    
public:
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) 
    {
        int n = s.size();
        par.resize(n);
        
        for(int i=0;i<n;i++)
            par[i] = i;
        
        for(auto i : pairs)
        {
            int p = i[0];
            int q = i[1];
            unite(p, q);
        }
        
        unordered_map<int, vector<int>> m;
        for(int i=0;i<s.size();i++)
            m[get_sp(i)].push_back(i);
        
      //  vector<string> temp;
        for(auto i : m)
        {
            string ss = "";
            
            for(auto x : i.second)
                ss += s[x];
            sort(ss.begin(), ss.end());
            
            int k = 0;
            for (int x : i.second)
                s[x] = ss[k++];
        }
        
        return s;
    }
};
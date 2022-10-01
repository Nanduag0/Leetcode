class Solution {
public:
    string repeatLimitedString(string s, int rl) 
    {
        unordered_map<char, int> m;
        for(auto i : s)
        {
            m[i]++;
        }
        
        priority_queue<pair<char, int>> pq;
        for(auto i : m)
            pq.push({i.first, i.second});
        
        string ans = "";
        
        while(!pq.empty())
        {
            auto p = pq.top();
            pq.pop();
            
            // p.second = freq;
            // p.first = val; |char|
            
            int mini = min(rl, p.second);
            for(int x=0;x<mini;x++)
                ans += p.first;
            
            if(p.second > mini)
            {
                if(pq.empty())
                    return ans;
                auto p1 = pq.top();
                pq.pop();
                ans += p1.first;
                
                if(p1.second-1 > 0)
                    pq.push({p1.first, p1.second-1});
                pq.push({p.first, p.second-mini});
            }            
        }
        
        return ans;
    }
};
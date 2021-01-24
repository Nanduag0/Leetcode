class Solution {
public:
    string reorganizeString(string s)
    {
        if(s.size() <= 1)
            return s;
        
        map<char, int> m;
        
        for(auto i : s)
            m[i]++;
        
        priority_queue<pair<int, char>> pq;
        for(auto i : m)
        {
            pq.push({i.second, i.first});
        }
        
        string ans = "";
        
        while(pq.size() > 1)
        {
            pair<int, char> p1 = pq.top();
            pq.pop();
            pair<int, char> p2 = pq.top();
            pq.pop();
            
            ans += p1.second;
            ans += p2.second;
            
            p1.first--, p2.first--;
            
            if(ans.back() == ans[ans.size()-2])
                return "";
            
            if(p1.first > 0)
                pq.push(p1);
            if(p2.first > 0)
                pq.push(p2);
            
        }
        
        if(!pq.empty())
        {
            pair<char, int> pp = pq.top();
            pq.pop();
            
            if(pp.first > 1)
                return "";
            else
                ans += pp.second;
        }
        
        return ans;
    }
};
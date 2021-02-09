class Solution {
public:
    string frequencySort(string s)
    {
        map<char, int> m;
        for(auto i : s)
            m[i] ++;
        
        priority_queue<pair<int, char>> pq;
        for(auto i : m)
            pq.push({i.second, i.first});
        
        string ans = "";
        
        while(!pq.empty())
        {
            pair<int, char> p1 = pq.top();
            
            pq.pop();
            while(p1.first--)
                ans += p1.second;
        }
        
        return ans;
    }
};
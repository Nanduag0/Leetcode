class Solution {
public:
    vector<int> topKFrequent(vector<int>& a, int k)
    {
        map<int, int> m;
        for(auto i : a)
            m[i] ++;
        
        vector<int> ans;
        
        priority_queue<pair<int, int>> pq;
        
        for(auto i : m)
            pq.push({i.second, i.first});
        
        while(k--)
        {
            pair<int, int> pp = pq.top();
            ans.push_back(pp.second);
            
            pq.pop();
        }
        
        return ans;
    }
};
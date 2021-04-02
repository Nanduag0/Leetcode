class Solution {
public:
    int minSetSize(vector<int>& a) 
    {
        unordered_map<int, int> m;
        for(auto i : a)
            m[i]++;
        
        priority_queue<pair<int, int>> pq;
        for(auto i : m)
            pq.push({i.second, i.first});
        
        int n = a.size();
        int N = n/2, cnt = 0;
        
        while(n > N)
        {
            cnt++;
            pair<int, int> p1 = pq.top();
            pq.pop();
            n -= p1.first;
        }
        
        return cnt;
    }
};
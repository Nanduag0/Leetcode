class Solution {
public:
    int findLHS(vector<int>& a)
    {
        sort(a.begin(), a.end());
        map<int, int> m;
        
        for(auto i : a)
            m[i]++;
        
        priority_queue<pair<int, int>> pq;
        for(auto i : m)
            pq.push({i.first, i.second});
        
        int maxi = 0;
        while(pq.size() > 1)
        {
            pair<int, int> p1 = pq.top();
            pq.pop();
            pair<int, int> p2 = pq.top();
            
            if(p1.first-p2.first == 1)
                maxi = max(maxi, (p1.second+p2.second));
        }
        
        return maxi;
    }
};
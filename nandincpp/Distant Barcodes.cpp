class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& bar)
    {        
        priority_queue<pair<int, int>> pq;
        map<int, int> m;
        
        for(auto i : bar)
            m[i] ++;
        for(auto i : m)
            pq.push({i.second, i.first});
        
        vector<int> ans;
        
        while(pq.size() > 1)
        {
            pair<int, int> p1 = pq.top();
            pq.pop();
            pair<int, int> p2 = pq.top();
            pq.pop();
            
            ans.push_back(p1.second);
            ans.push_back(p2.second);
            
            p1.first--, p2.first--;
            if(p1.first > 0)
                pq.push(p1);
            if(p2.first > 0)
                pq.push(p2);
                
        }
        
        while(!pq.empty())
        {
            pair<int, int> pp = pq.top();
            pq.pop();
            
            if(pp.first > 0)
            ans.push_back(pp.second);
        }
        
        return ans;
        
    }
};
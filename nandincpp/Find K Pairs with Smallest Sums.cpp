#define vv pair<int, pair<int, int>>
class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& a1, vector<int>& a2, int k)
    {
        int s1 = a1.size(), s2 = a2.size();
        if(s1==0 || s2==0)
            return {};
        
        vector< vector<int> > ans;
        set<pair<int, int>> used;
        priority_queue <vv, vector<vv>, greater<vv> > pq;
        
        pq.push({a1[0]+a2[0], {0,0}});
        used.insert({0, 0});
        
        while(!pq.empty() && ans.size()<k)
        {
            vv p1 = pq.top();
            pq.pop();
            
            int idx1 = p1.second.first, idx2 = p1.second.second;
            ans.push_back({a1[idx1], a2[idx2]});
            
            if(idx1+1<s1 && !used.count({idx1+1, idx2}))
            {
                pq.push({a1[idx1+1]+a2[idx2], {idx1+1, idx2}});
                used.insert({idx1+1, idx2});
            }
            if(idx2+1<s2 && !used.count({idx1, idx2+1}))
            {
                pq.push({a1[idx1]+a2[idx2+1], {idx1, idx2+1}});
                used.insert({idx1, idx2+1});
            }
            
        }
        
        return ans;
    }
};
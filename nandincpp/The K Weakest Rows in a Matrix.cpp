class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& a, int k)
    {
        int row = a.size(), col = a[0].size();
        int sum;
        priority_queue<pair<int, int>> pq;
        
        for(int i=0;i<row;i++)
        {
            sum = 0;
            for(int j=0;j<col;j++)
            {
                sum += a[i][j];
            }
            
            if(pq.size() < k)
                pq.push({sum, i});
            else
            {
                if(pq.top().first > sum)
                {
                    pq.pop();
                    pq.push({sum, i});
                }                
            }
        }
        
        vector<int> ans;
        while(!pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
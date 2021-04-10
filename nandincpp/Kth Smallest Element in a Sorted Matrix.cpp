class Solution {
public:
    int kthSmallest(vector<vector<int>>& m, int k) 
    {
        priority_queue<int> pq;
        
        for(int i=0;i<m.size();i++)
        {
            for(int j=0;j<m[0].size();j++)
            {
                pq.push(m[i][j]);
                
                if(pq.size() > k)
                    pq.pop();
            }
        }
        
        return pq.top();
    }
};
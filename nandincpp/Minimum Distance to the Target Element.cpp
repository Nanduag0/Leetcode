class Solution {
public:
    int getMinDistance(vector<int>& a, int target, int start) 
    {
        priority_queue<int,vector<int>, greater<int>> pq;
        
        for(int i=0;i<a.size();i++)
        {
            if(target == a[i])
            {
                pq.push(abs(start - i));
            }
        }
        return pq.top();
    }
};
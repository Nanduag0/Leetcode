class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extra) 
    {
        int n = classes.size();
        priority_queue< pair<double, pair<int, int>> > pq;
        
        for(int i=0;i<n;i++)
        {
            int pass = classes[i][0], total = classes[i][1];
            double av1 = (double)pass/total;
            double av2 = (double)(pass+1)/(total+1);
            
            double del = av2 - av1;
            pq.push({del, {pass, total}});
        }
        
        double ans1 = 0;
        while(extra--)
        {
            auto p1 = pq.top();
            pq.pop();
            
            //ans1 += (double)(p1.second.first+1)/(p1.second.second+1);
            double temp1 = (double)(p1.second.first+1)/(p1.second.second+1);
            double temp2 = (double)(p1.second.first+2)/(p1.second.second+2);
            
            double del2 = temp2 - temp1;
            
            pq.push({del2, {p1.second.first+1, p1.second.second+1}});
        }
        
        while(!pq.empty())
        {
            auto p2 = pq.top();
            pq.pop();
            
            int pass = p2.second.first, total = p2.second.second;
            ans1 += (double)(pass)/total;
        }
        
        return ans1/n;
    }
};
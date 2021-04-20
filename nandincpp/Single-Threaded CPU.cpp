#define ll long long
class Solution {
    vector<int> ans;
    
public:
    vector<int> getOrder(vector<vector<int>>& task) 
    {
        int n = task.size();
        for(int i=0;i<n;i++)
            task[i].push_back(i);
        
        int i = 0, j = 0, time = 0;
        sort(task.begin(), task.end());
        
        priority_queue< pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>> > pq;
        
        for(int j=0;j<n;j++)
        {
            if(i<n && pq.empty() && time<task[i][0])
                time = task[i][0];
            
            while(i<n && time>=task[i][0])
            {
                ll time_exe = task[i][1];
                int index = task[i][2];
                pq.push({time_exe, index});
                
                i++;
            }
            
            pair<ll, int> p1 = pq.top();
            ans.push_back(p1.second);
            
            pq.pop();
            time += p1.first;
        }
        
        return ans;
    }
};
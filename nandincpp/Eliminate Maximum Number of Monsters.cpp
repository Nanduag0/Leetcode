class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) 
    {
        int n = dist.size();
        vector<double> reqd(n);
        
        for(int i=0;i<n;i++)
            reqd[i] = (double)dist[i] / (double)speed[i];
        
        int ans = 0, time = 0;
        
        sort(reqd.begin(), reqd.end());
        
        for(int i=0;i<n;i++)
        {
            if(reqd[i] <= time)
                break;
            
            ans++, time++;
        }
        
        return ans;
    }
};
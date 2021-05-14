class Solution {
public:
    int distanceBetweenBusStops(vector<int>& dist, int start, int destination) 
    {
        int ans1 = 0, ans2 = 0, sum  = 0;
        int n = dist.size();
        
        for(int i=0;i<n;i++)
            sum += dist[i];
        
        if(start > destination)
            swap(start, destination);
        
        for(int i=start;i<destination;i++)
            ans1 += dist[i];
        
        ans2 = sum - ans1;
        
        return min(ans1, ans2);
    }
};
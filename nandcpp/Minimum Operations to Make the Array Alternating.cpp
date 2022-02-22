class Solution {
public:
    int minimumOperations(vector<int>& a) 
    {
        int freq[100005][2];
        memset(freq, 0, sizeof(freq));
        
        for(int i=0;i<a.size();i++)
        {
            freq[a[i]][i%2]++;
        }
        
        int j = 0, k = 0, ans = 0;
        for(int i=0;i<100005;i++)
        {
            ans = max({ans, freq[i][0]+k, freq[i][1]+j});
            
            j = max(j, freq[i][0]);
            k = max(k, freq[i][1]);
        }
        
        return a.size()-ans;
    }
};
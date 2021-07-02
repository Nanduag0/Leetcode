class Solution {
public:
    int getWinner(vector<int>& a, int k) 
    {
        int prev_max = a[0], cnt = 0;
        for(int i=1;i<a.size();i++)
        {
            if(a[i] > prev_max)
            {
                cnt = 0;
                prev_max = a[i];
            }
            
            cnt++;
            if(cnt == k)
                break;
        }
        
        return prev_max;
    }
};
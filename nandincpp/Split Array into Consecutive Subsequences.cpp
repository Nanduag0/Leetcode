class Solution {
public:
    bool isPossible(vector<int>& a)
    {
        map<int, int> freq;
        int n = a.size();
        int total = n;
        
        for(int i=0;i<n;i++)
            freq[a[i]]++;
        
        if(n < 3)
            return false;
        
        for(int i=0;i<n;i++)
        {
            int now = a[i];
            
            if(freq[now]>0 && freq[now+1]>0 && freq[now+2]>0)
            {
                total -= 3;
                freq[now]--;
                freq[now+1]--;
                freq[now+2]--;
                now += 3;
                
                while(freq[now]>0 && freq[now]>freq[now-1])
                {
                    total--;
                    freq[now]--;
                    now++;
                }
            }
        }
        
        if(total == 0)
            return true;
        
        return false;
    }
};
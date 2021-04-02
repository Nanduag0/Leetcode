class Solution {
public:
    int numOfSubarrays(vector<int>& a, int k, int threshold)
    {
        int sum = 0, ans = 0;
        for(int i=0;i<k;i++)
            sum += a[i];
        
        int av = sum/k;
        if(av >= threshold)
            ans++;
        
        int i = 0, j = k-1;
        while(j < a.size()-1)
        {
            j++;
            sum += a[j];
            
            sum -= a[i];
            i++;
            
            av = sum/k;
            if(av >= threshold)
                ans++;
        }
        
        return ans;
    }
};
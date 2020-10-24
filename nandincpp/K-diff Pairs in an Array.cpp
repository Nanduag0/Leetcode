class Solution {
public:
    int findPairs(vector<int>& a, int k) 
    {
        sort(a.begin(), a.end());
        
        int i=0, j=1, cnt=0;
        int n = a.size();
        
        while(i<n && j<n)
        {
            if(i==j || a[j]-a[i] < k)
                j++;
            
            else if(a[j]-a[i] > k)
                i++;
            
            else
            {
                i++;
                cnt++;
                
                while( i<n && a[i]==a[i-1] )
                    i++;
            }
        }
        return cnt;
    }
};
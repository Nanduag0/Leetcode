class Solution {
public:
    int triangleNumber(vector<int>& a)
    {
        int n = a.size();
        int cnt = 0;
        sort(a.begin(), a.end());
        
        for(int i=0;i<n-2;i++)
        {
            int k = i + 1;
            
            for(int j=i+2;j<n;j++)
            {
                while(k<j && (a[i]+a[k] <= a[j]))
                    k++;
                
                cnt += (j-k);
            }
        }
        
        return cnt;
    }
};
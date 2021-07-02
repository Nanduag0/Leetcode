class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& a) 
    {
        int n = a.size();
        int left = 0, right = n-1;
        
        while(left<n-1 && a[left]<=a[left+1])
            left++;
        
        if(left == n-1)
            return 0;
        
        while(right>left && a[right]>=a[right-1])
            right--;
        
        int ans = min(n-1-left, right);
        int i = 0, j = right;
        
        while(i<=left && j<n)
        {
            if(a[j] >= a[i])
            {
                ans = min(ans, j-i-1);
                i++;
            }
            
            else
                j++;
        }
        
        return ans;
    }
};
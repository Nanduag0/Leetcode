class Solution {
    bool check(string s, string p)
    {
        int i = 0, j = 0;
        
        while(i<s.size() && j<p.size())
        {
            if(s[i] == p[j])
                i++, j++;
            else
                i++;
        }
        
        return j==p.size();
    }
    
public:
    int maximumRemovals(string s, string p, vector<int>& removable) 
    {
        int low = 0, high = removable.size();
        int ans = 0;
        
        while(low <= high)
        {
            int mid = low + (high-low)/2;
            
            string temp = s;
            for(int i=0;i<mid;i++)
            {
                temp[removable[i]] = '&';
            }
            
            if(check(temp, p))
            {
                ans = mid;
                low = mid+1;
            }
            else
                high = mid-1;
        }
        
        return ans;
    }
};
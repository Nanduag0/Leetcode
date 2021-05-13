class Solution {
public:
    vector<int> shuffle(vector<int>& a, int n) 
    {
        int i = 0, j = n;
        vector<int> ans;
        
        while(1)
        {
            ans.push_back(a[i]);
            ans.push_back(a[j]);
            i++, j++;
            
            if(i == n)
                break;
        }
        return ans;
    }
};
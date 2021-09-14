class Solution {
public:
    vector<int> rearrangeArray(vector<int>& a)
    {
        sort(a.begin(), a.end());
        bool flag = 1;
        int n = a.size();
        
        for(int i=1;i<n-1;i++)
        {
            if(flag)
                swap(a[i], a[i+1]);
            
            flag = !flag;
        }
        
        return a;
    }
};
class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& a, vector<int>& l, vector<int>& r) 
    {
        vector<int> temp;
        
        int n =l.size();
        vector<bool> ans(n);
        
        for(int i=0;i<n;i++)
        {
            temp.assign(a.begin()+l[i], a.begin()+r[i]+1);
            sort(temp.begin(), temp.end());
            
            int diff = temp[1] - temp[0];
            bool flag = 1;
            
            for(int j=1;j<temp.size();j++)
            {
                if(temp[j]-temp[j-1] != diff)
                {
                    ans[i] = 0;
                    flag = 0;
                    break;
                }
            }
            
            if(flag == 1)
                ans[i] = 1;
            temp.clear();
        }
        
        return ans;
    }
};
class Solution {
public:
    string largestTimeFromDigits(vector<int>& a)
    {
        string ans = "";
        
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                for(int k=0;k<4;k++)
                {
                    if(i==j || j==k || k==i)
                        continue;
                    
                    string hrs = to_string(a[i]) + to_string(a[j]);
                    string min = to_string(a[k]) + to_string(a[6-i-j-k]);
                    
                    string total = hrs + ":" +  min;
                    
                    if(hrs<"24" && min<"60" && total>ans)
                        ans = total;
                }
            }
        }
        
        return ans;
    }
};
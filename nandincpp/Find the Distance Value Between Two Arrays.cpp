class Solution {
public:
    int findTheDistanceValue(vector<int>& a, vector<int>& b, int d)
    {
        int cnt = 0;
        
        for(int i=0;i<a.size();i++)
        {
            for(int j=0;j<b.size();j++)
            {
                if(abs(a[i]-b[j]) <= d)
                {
                    cnt++;
                    break;
                }
            }
        }
        
        return (a.size() - cnt);
    }
};
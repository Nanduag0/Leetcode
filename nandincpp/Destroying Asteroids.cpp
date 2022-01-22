class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& a)
    {
        bool flag = 1;
        sort(a.begin(), a.end());
        long long m = mass;
            
        for(int i=0;i<a.size();i++)
        {
            if(m >= a[i])
            {
                m += (long long)a[i];
            }
            else
            {
                flag = 0;
                break;
            }
        }
        
        return flag;
    }
};
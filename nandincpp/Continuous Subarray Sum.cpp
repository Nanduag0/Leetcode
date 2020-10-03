class Solution {
public:
    bool checkSubarraySum(vector<int> &a, int k)
    {
            map<int ,int> m;
    int sum = 0,sum1;

    m[0] = -1;
    for(int i=0;i<a.size();i++)
    {
        if(k != 0)
        {
            sum += a[i];
            sum1 = sum%k;

            if(m.find(sum1) == m.end())
            {
                m[sum1] = i;
            }

            else if(i-m[sum1] > 1)
            return true;
        }

        if(k==0 && a[i]==0 && i<a.size()-1 && a[i+1]==0)
        return true;
    }

    return false;
    }
};
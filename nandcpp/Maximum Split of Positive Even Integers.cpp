class Solution {
public:
    vector<long long> maximumEvenSplit(long long f) 
    {
        if(f & 1)
            return {};
        
        int i = 2;
        vector<long long> ans;
        while(i <= f)
        {
            ans.push_back(i);
            f -= i;
            i += 2;
        }
        
        int back = ans.back();
         ans.pop_back();
         ans.push_back(f+back);
        return ans;
    }
};
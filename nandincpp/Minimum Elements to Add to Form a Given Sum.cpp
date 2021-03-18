class Solution {
public:
    int minElements(vector<int>& a, int limit, int goal) 
    {
        long long sum = 0;
        long long reqd;
        for(int i=0;i<a.size();i++)
            sum += a[i];
        
        reqd = goal - sum;
        reqd = abs(reqd);
        
        if(reqd == 0)
            return 0;
        
        if(reqd%limit == 0)
            return reqd/limit;
        
        return reqd/limit+1;
    }
};
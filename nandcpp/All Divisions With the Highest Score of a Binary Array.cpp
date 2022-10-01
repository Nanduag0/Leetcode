class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& a) 
    {
        int rights = 0, lefts = 0;
        int maxi = 0;
        vector<int> res;
        
        for(auto i : a)
            rights += i;
        
        for(int i=0;i<=a.size();i++)
        {
            if(lefts+rights > maxi)
            {
                res.clear();
                res.push_back(i);
                maxi = lefts+rights;
            }
            
            else if(lefts+rights == maxi)
                res.push_back(i);
            
            if(i != a.size())
            {
                if(a[i] == 0)
                    lefts++;
                if(a[i] == 1)
                    rights--;
            }
        }
        
        return res;
    }
};
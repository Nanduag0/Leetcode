class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& a) 
    {
        sort(a.begin(), a.end());
        
        int diff = a[1] - a[0];
        for(int i=1;i<a.size()-1;i++)
        {
            if(a[i+1]-a[i] != diff)
                return 0;
        }
        return 1;
    }
};
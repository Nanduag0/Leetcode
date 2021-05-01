class Solution {
public:
    void duplicateZeros(vector<int>& a)
    {
        int n = a.size();
        
        for(int i=1;i<n;i++)
        {
            if(a[i-1] == 0)
            {
                a.insert(a.begin()+i, 0);
                a.erase(a.end()-1);
                i++;
            }
        }
    }
};
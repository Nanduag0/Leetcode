class Solution {
public:
    int findUnsortedSubarray(vector<int>& a)
    {
        vector<int> replica = a;
        sort(replica.begin(), replica.end());
        int i = 0, j = a.size()-1;
        
        if(a.size() == 1)
            return 0;
        
        while(i < j)
        {
            if(a[i] == replica[i])
                i++;
            if(a[j] == replica[j])
                j--;
            
            if(a[i]!=replica[i] && a[j]!= replica[j])
                break;
        }
        
        if(j == i)
            return 0;
        return (j-i+1);
    }
};
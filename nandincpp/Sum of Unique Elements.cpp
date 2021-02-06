class Solution {
public:
    int sumOfUnique(vector<int>& a)
    {
        vector<int> freq(101, 0);
        for(int i=0;i<a.size();i++)
            freq[a[i]]++;
        
        int sum = 0;
        
        for(int i=0;i<freq.size();i++)
        {
            if(freq[i] == 1)
                sum += i;
        }
        
        return sum;
    }
};
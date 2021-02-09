class Solution {
public:
    int majorityElement(vector<int>& a)
    {
        int n = a.size();
        map<int, int> freq;
        
        for(int i=0;i<a.size();i++)
        {
            freq[a[i]]++;
        }
        
        for(auto i : freq)
        {
            if(i.second > (n/2))
                return i.first;
        }
        
        return -1;
    }
};
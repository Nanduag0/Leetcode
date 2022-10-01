class Solution {
public:
    vector<int> pivotArray(vector<int>& a, int pivot) 
    {
        vector<int> s, l;
        int cnt = 0;
        
        for(auto i : a)
        {
            if(i == pivot)
            {
                cnt++;
                continue;
            }
            else if(i > pivot)
                l.push_back(i);
            else if(i < pivot)
                s.push_back(i);
        }
        
        for(int i=0;i<cnt;i++)
            s.push_back(pivot);
        
        for(int i=0;i<l.size();i++)
            s.push_back(l[i]);
        
        return s;
    }
};
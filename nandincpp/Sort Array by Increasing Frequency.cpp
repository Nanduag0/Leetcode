class Solution {
    unordered_map<int, int> m;
   
public:
    vector<int> frequencySort(vector<int>& a)
    {      
        for(auto i : a)
            m[i]++;
        
        sort(a.begin(), a.end(), [&](int x, int y)
             {
                 if(m[x] == m[y])
            return x>y ;
        
        return m[y] > m[x];
             });
        return a;
    }
};
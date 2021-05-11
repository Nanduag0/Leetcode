class Solution {
public:
    bool checkIfExist(vector<int>& a)
    {
        unordered_map<int, int> m;
        
        for(auto i : a)
            m[i]++;
        
        for(int i=0;i<a.size();i++)
        {
            if(a[i] == 0)
            {
                if(m[a[i]]%2 == 0)
                    return 1;
            }
            else if(m.count(a[i]*2))
                return 1;
        }
        
        return 0;
    }
};
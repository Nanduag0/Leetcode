class Solution {
public:
    int removeElement(vector<int>& a, int val) 
    {
        for(auto i=a.begin();i!=a.end();i++)
        {
            if(*i == val)
            {
                a.erase(i);
                i--;
            }
        }
        
        return a.size();
    }
};
class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound)
    {
        vector<int> px, py;
        int powx = x, powy = y;
        
        px.push_back(1), py.push_back(1);
        
        if(x != 1)
        {
            while(powx < bound)
            {
                px.push_back(powx);
                powx = x*powx;
            }
        }
        
        if(y != 1)
        {
            while(powy < bound)
            {
                py.push_back(powy);
                powy = y*powy;
            }
        }
        
        set<int> s;
        for(auto i : px)
        {
            for(auto j : py)
            {
                if((i+j) <= bound)
                    s.insert(i+j);
            }
        }
        
        vector<int> res;
        for(auto i=s.begin();i!=s.end();i++)
            res.push_back(*i);
        
        return res;
    }
};
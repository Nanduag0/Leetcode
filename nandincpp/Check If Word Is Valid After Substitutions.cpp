class Solution {
public:
    bool isValid(string s) 
    {
        string t;
        
        for(auto i : s)
        {
            if(i=='a' || i=='b')
                t.push_back(i);
            
            else
            {
                if(t.empty() || t.back()!='b')
                    return 0;
                
                t.pop_back();
                
                if(t.empty() || t.back()!='a')
                    return 0;
                
                t.pop_back();
            }
        }
        return t.size()==0;
    }
};
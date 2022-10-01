class Solution {
    bool isSorted(vector<int>& v)
    {
        if(v.size() == 1)
            return 1;
        
        for(int i=1;i<v.size();i++)
        {
            if(v[i-1] >= v[i])
                return 0;
        }
        return 1;
    }
    
public:
    bool areNumbersAscending(string s) 
    {
        vector<int> v;
        
        for(int i=0;i<s.size();)
        {
            //char c = s[i];
            if(isdigit(s[i]))
            {
                string str = "";
                while(i<s.size() && isdigit(s[i]))
                {
                    str += s[i++];
                }
                v.push_back(stoi(str));
            }
            
            else
                i++;
        }
        
        // if(str.size() != 0)
        //     v.push_back(str);
        
        return isSorted(v);
    }
};
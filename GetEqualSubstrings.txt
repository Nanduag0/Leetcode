class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) 
    {
        if(s=="")
            return 0;
        
        int start=0,end=0;
        vector<int> vec;
        int maxus=0;
        int maxim=INT_MIN;
        int len=0;
        while(end<s.length())
        {
            vec.push_back(abs(s[end]-t[end]));
            maxus+=abs(s[end]-t[end]);
            if(maxus>maxCost)
            {
                auto it=vec.begin();
                maxus-=(*it);
                vec.erase(vec.begin());
                start++;
                
            }
            else
            {
                if(end>=start)
                {
                    len=end-start+1;
                }
            }
          
            end++;
            
        }
        return len;
    
    }
};
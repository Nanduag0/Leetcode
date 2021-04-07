class Solution {
     string ans = "";
public:
    string customSortString(string s, string t) 
    {
        map<char, int> m;
        for(auto i : t)
            m[i]++;
        
        for(int i=0;i<s.size();i++)
        {
            if(m.count(s[i]))
            {
                while(m[s[i]] > 0)
                    ans += s[i], m[s[i]]--;
            }
        }
        
        map<char, int> :: iterator i;
               
        for(i=m.begin();i!=m.end();i++)
        {
            if(i->second != 0)
            {
                while(i->second--)
                {
                    ans += i->first;
                   // i->second--;
                }
            }
        }
        return ans;
    }
};
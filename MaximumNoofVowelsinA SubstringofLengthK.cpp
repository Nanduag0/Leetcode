class Solution {
public:
    int maxVowels(string s, int k) 
    {
        if(s=="")
            return 0;
        int start=0,end=0;
        vector<char> vec(5);
        vec={'a','e','i','o','u'};
        int maxus=0;
        int maxim=INT_MIN;
        map<char,int> mp;
        while(end<s.length())
        {
            mp[s[end]]++;
            if(end-start+1==k)
            {
                for(int i=0;i<vec.size();i++)
                {
                    auto itr=mp.find(vec[i]);
                    if(mp.find(vec[i])!=mp.end())
                    {
                        maxus+=(itr->second);
                    }
                }
                maxim=max(maxus,maxim);
                maxus=0;
                auto it=mp.find(s[start]);
                mp[s[start]]--;
                if(mp[s[start]]==0)
                {
                    mp.erase(it);
                }
                start++;
            }
            end++;
        }
        return maxim;
        
        
    }
};
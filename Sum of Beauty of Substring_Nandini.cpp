class Solution {
public:
    int beautySum(string s) 
    {
        if(s.length()==0 || s.length()==1 || s.length()==2)
        {
            return 0;
        }
        string sub="";
        int minim=INT_MAX;
        int maxim=INT_MIN;
        int ans=0,j,p=0;
        for(int i=0;i<s.length();i++)
        {
             map<char,int> mp;
             minim=INT_MAX;
             maxim=INT_MIN;
            for(j=i;j<s.length();j++)
            {
               minim=INT_MAX;
               maxim=INT_MIN;
               mp[s[j]-'a']++;
                for(auto c : mp)
                {
                    //cout<<"\n"<<c.first<<"****"<<c.second<<"\n";
                    minim=min(c.second,minim);
                    maxim=max(c.second,maxim);
                }
                ans+=abs(maxim-minim);
            }
            p++;
        }
        return ans;
    }
};
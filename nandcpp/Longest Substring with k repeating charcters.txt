class Solution {
public:
    int longestSubstring(string s, int k) 
    {
    int ans=check(0,s.length(),s,k);
    return ans;
    }
    int check(int start,int end,string s,int k)
    {
        int n =s.length();
        
        if(s.length()==0 || s.length()<k)
        {
            return 0;
        }
        if(k<=1)
        {
            return n;
        }
        int l1,l2;
        int  mp[26]={};
        for(int i=start;i<end;i++)
        {
            mp[s[i]-'a']++;
        }
        for(int i=start;i<end;i++)
        {
            if(mp[s[i]-'a']<k)
            {
                l1=check(start,i,s,k);
                l2=check(i+1,end,s,k);
                return max(l1,l2);
            }
        }
         return (end-start);
    }
};
class Solution {
    int isvowel(string s)
    {
        int count = 0;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
                count++;
        }
        return count;
    }
public:
    bool halvesAreAlike(string s)
    {
        int n = s.size();
        int cnt = 0, i = n-1;
        string s1 = "",s2 = "";
        
        while(cnt != (n/2))
        {
            s2 += s[i];
            i--;
            cnt++;
        }
        
        cnt = 0;
        while(cnt != (n/2))
        {
            s1 += s[i];
            i--;
            cnt++;
        }
        
        int f1 = isvowel(s1);
        int f2 = isvowel(s2);
        
        return f1==f2;
    }
};
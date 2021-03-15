class Solution {
public:
    string countAndSay(int n)
    {
        string  s="";
        int k=1;
        string a="11";
        if(n==1)
            return "1";
        else
            if(n==2)
                return "11";
        for(int i=3;i<=n;i++)
        {
            string t="";
            a=a+'&';
            int c=1;
            for(int j=1;j<a.length();j++)
            {
                if(a[j]!=a[j-1])
                {
                t+=to_string(c);
                t+=a[j-1];
                c=1;    
                }
                else
                {
                    c++;
                }
               
            }
            a=t;
        }
        return a ;
        
    }
};
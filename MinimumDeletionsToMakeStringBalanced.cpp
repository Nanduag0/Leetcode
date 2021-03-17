class Solution {
public:
    int minimumDeletions(string s) 
    {
       
        int result=INT_MAX ;
        int bcount=0;
        int a[s.length()];
        if(s[s.length()-1]=='a')
        {
         a[s.length()-1]=1;
        }
        else
            a[s.length()-1]=0;
       
        for(int i=s.length()-2;i>=0;i--)
        {
            if(s[i]=='a')
            {
              a[i]=a[i+1]+1;   
            }
            else
                a[i]=a[i+1];
           
        }
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='b')
            {
             result=min(a[i]+bcount,result);
             bcount++;  
            }
           
        }
        result=min(result,bcount);
        if(result==INT_MAX)
        {
            return 0;
        }
        else
        return result;
        
    }
};                             
                        
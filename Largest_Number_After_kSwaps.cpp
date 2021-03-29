class Solution
{
    public:
    string findMaximumNum(string str, int k)
    {
       // code here.
       string ans="";
       dfs(str,ans,k);
       return ans;
    }
    void dfs(string str,string &ans,int k)
    {
        if(ans<str)
        {
            ans=str;
        }
       if(k==0)
       {
           return;
       }
       for(int i=0;i<str.length()-1;i++)
       {
           for(int j=i+1;j<str.length();j++)
           {
               if(str[j]>str[i])
               {
                   swap(str[i],str[j]);
                   dfs(str,ans,k-1);
                   swap(str[i],str[j]);
               }
           }
       }
       
    }
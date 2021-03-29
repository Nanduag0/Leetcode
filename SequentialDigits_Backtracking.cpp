class Solution {
public:
    vector<int> sequentialDigits(int low, int high) 
    {
        vector<int> ans;
        int i=1;
        int j=high/low;
        int l=low;
        int m=high;
        int cnt=10;
        int tot=0,tote=0;
        vector<int> a;
        int flag=0;
        while(l)
        {
            l=l/10;
            tot++;
        }
        l=1;
        while((tot-1)>0)
        {
            l*=10;
            tot--;
        }
        while(l<m)
        {
            for(int c=1;c<10;c++)
        {   
           backtrack(low,high,c,0,l,ans);
        }
            l=l*10;
        }
        
        sort(ans.begin(),ans.end());
       
      return ans;
    }
    void backtrack(int low,int high,int i,int num,int cnt,vector<int> &ans)
    {
     if(num>=low && num<=high && cnt==0)
     {
         ans.push_back(num);
         return;
     }
        if(num>high)
        {
            return;
        }
        if(i<=9)
        backtrack(low,high,i+1,num+(i*cnt),cnt/10,ans);
        
    }
  
};
class Solution {
public:
    string getHappyString(int n, int k)
    {
        string vec="abc";
        string ans="";
        vector<bool> seen(3);
        seen={false};
        int index=0;
        vector<string> coll;
        combination(vec,index,ans,seen,coll,n);
        sort(coll.begin(),coll.end());
        if(k>coll.size())
        {
            return "";
        }
        return coll[k-1];
        
    }
    void combination(string vec,int index,string ans,vector<bool> seen,vector<string> &coll,int n)
    {
        
        if(ans.length()==n)
        {
            coll.push_back(ans);
            return ;
        }
        for(int i=0;i<vec.length();i++)
        {
            if(ans.size()==0 || ans.back()!=vec[i])
            {
             ans+=vec[i];
             combination(vec,i,ans,seen,coll,n);
             ans.erase(ans.length()-1,1);    
            }
           
        }
    }
};
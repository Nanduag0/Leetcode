class Solution
{
     vector<vector<string>> ans;
     vector<string> vec;
public:
     vector<vector<string>> partition(string s) 
    {
         findPartition(ans,s);
         return ans;
    }
    void findPartition(vector<vector<string>> &ans,string s)
    {
        if(s.length()==0)
        {
            ans.push_back(vec);
        }
        for(int i=0;i<s.length();i++)
        {
         // vector<string> vec;
         string sleft=s.substr(0,i+1);
         if(isPalindrome(sleft))
         {
            vec.push_back(sleft);
            findPartition(ans,s.substr(i+1));
            vec.erase(vec.end()-1);
         }
        }
    }
    
    bool isPalindrome(string p)
    {
        int l=0;
        int r=p.length()-1;
        if(l==r)
        return true;
        while(l<=r)
        {
            if(p[l]!=p[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
};
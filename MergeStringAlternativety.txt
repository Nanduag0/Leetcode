class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        string ans="";
        int i=1;
        if(word1=="" && word2=="")
        {
            return ans;
        }
        else
            if(word1=="")
            {
                return ans+word2;
            }
        else
            if(word2=="")
            {
                return ans+word1;
            }
        
        while(word1!="" && word2!="")
        {
            if(i&1)
            {
                ans+=(word1[0]);
                word1.erase(0,1);
            }
            else
            {
                ans+=(word2[0]);
                word2.erase(0,1);
                
            }
            i++;
        }
        if(word1!="")
        {
            ans+=word1;
        }
        else
            ans+=word2;
        return ans;
        
        
    }
};
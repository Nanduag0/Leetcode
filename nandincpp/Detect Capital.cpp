class Solution {
public:
    bool detectCapitalUse(string word) 
    {
        bool res=0;
        int cap=0;
        for(auto i:word)
        {
            if(i>='A' && i<='Z')
            {
                cap++;
            }
        }
        if(cap==0 || cap==word.size())
        {
            res=1;
        }
        else if(cap==1 && (word[0]>='A' && word[0]<='Z'))
        {
            res=1;
        }
        return res;
    }
};
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        int ans=0,flag=0;
        for(int i=0;i<words.size();i++)
        {
            flag=0;
            for(int j=0;j<words[i].size();j++)
            {
                if(allowed.find(words[i][j])==-1)
                {
                    flag=1;
                    break;
                    
                }
            }
            if(flag!=1)
            {
                ans++;
            }
        }
        return ans;
    }
};
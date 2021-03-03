class Solution {
public:
    bool checkInclusion(string s1, string s2)
    {
        vector<int> cnt_s1(26, 0), cnt_s2(26, 0);
        for(int i=0;i<s1.size();i++)
            cnt_s1[s1[i] - 'a']++;
        
        int i = 0, j = 0;
        
        while(j < s2.size())
        {
            cnt_s2[s2[j] - 'a']++;
            
            if(j-i+1 == s1.size())
            {
                if(cnt_s1 == cnt_s2)
                    return 1;
                else
                {
                    cnt_s2[s2[i] - 'a']--;
                    i++;
                }
            }
            j++;
        }
        
        return 0;
    }
};
class Solution {
public:
    bool canConstruct(string ran, string mag)
    {
        int freq[26] = {};
        
        for(int i=0;i<mag.size();i++)
        {
            freq[mag[i]-'a']++;
        }
        
        for(int i=0;i<ran.size();i++)
        {
            freq[ran[i]-'a']--;
            
            if(freq[ran[i]-'a'] < 0)
                return false;
        }
        
        return true;
    }
};
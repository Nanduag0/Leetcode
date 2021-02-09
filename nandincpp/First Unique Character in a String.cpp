class Solution {
public:
    int firstUniqChar(string s) 
    {
        vector<int> freq(26, 0);

        for (int i = 0; i < s.size(); i++)
        {
            freq[s[i] - 'a']++;
        }

        for (int j = 0; j < s.size(); j++)
        {
            if (freq[s[j] - 'a'] == 1)
                return j;
        }

        return -1;
    }
};
class Solution {
public:
    int characterReplacement(string s, int k)
    {
        int start = 0, end = 0, max_char = 0, length = 0;
        vector<int> freq(26, 0);
        int n = s.size();
        
        for(int end=0;end<n;end++)
        {
            freq[s[end]-  'A']++;
            int x = freq[s[end] - 'A'];
            
            max_char = max(max_char, x);
            
            while(end-start+1-max_char > k)
            {
                freq[s[start] - 'A']--;
                start++;
            }
            
            length = max(length, end-start+1);
        }
        
        return length;
    }
};
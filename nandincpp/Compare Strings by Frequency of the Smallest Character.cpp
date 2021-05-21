class Solution {
    int f(string s)
    {
        sort(s.begin(), s.end());
        auto x = s[0];
        int i = 0, cnt = 0;
        
        while(i<s.size() && s[i]==x)
        {
            cnt++;
            i++;
        }
        
        return cnt;
    }
    
public:
    vector<int> numSmallerByFrequency(vector<string>& q, vector<string>& words)
    {
        int n = words.size();
        vector<int> freq(n), ans;
        
        for(int i=0;i<words.size();i++)
            freq[i] = f(words[i]);
        
        sort(freq.begin(), freq.end());
        
        for(int i=0;i<q.size();i++)
        {
            auto x = lower_bound(freq.begin(), freq.end(), f(q[i])+1);
            ans.push_back(freq.end() - x);
        }
        
        return ans;
    }
};
class Solution {
   
public:
    vector<string> commonChars(vector<string>& word) 
    {
         vector<int> freq(26, INT_MAX);
        
        // for(int i=0;i<word[0].size();i++)
        //     freq[word[0][i] - 'a']++;
        
        for(int i=0;i<word.size();i++)
        {
            vector<int> temp(26, 0);
            for(auto c : word[i])
                temp[c - 'a']++;
            
            for(int j=0;j<26;j++)
                freq[j] = min(freq[j], temp[j]);
        }
        
        vector<string> ans;
        for(int i=0;i<26;i++)
        {
            while(freq[i] > 0)
            {
                ans.push_back(string(1, i+'a'));
                freq[i]--;
            }
        }
        
        return ans;
    }
};
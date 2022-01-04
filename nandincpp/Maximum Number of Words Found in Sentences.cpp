class Solution {
public:
    int mostWordsFound(vector<string>& sentences) 
    {
        int ans = 0;
        
        int i = 0, n = sentences.size();
        while(i < n)
        {
            stringstream ss(sentences[i]);
            string token;
            vector<string> v;
            
            while(getline(ss, token, ' '))
            {
                v.push_back(token);
            }
            
            ans = max(ans, (int)v.size());
            i++;
        }
        
        return ans;
    }
};
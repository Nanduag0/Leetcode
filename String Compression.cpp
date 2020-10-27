class Solution {
public:
    int compress(vector<char>& chars)
    {
        int n = chars.size();
        int i = 0,j, ans = 0;
        
        while(i < n)
        {
            j = i;
            
            while(j<n && chars[i]==chars[j])
            {
                j++;
            }
            
            chars[ans] = chars[i];
            ans++;
            
            if(j-i > 1)
            {
                string ss = to_string(j-i);
                for(char c : ss)
                {
                    chars[ans++] = c;
                }
            }
            
            i = j;
        }
        
        return ans;
    }
};
class Solution {
public:
    string reverseWords(string s)
    {
        int n = s.size();
        
        string ans = "";
        int i = 0, j;
        
        while(i < n)
        {
            while(i<n && s[i]==' ')
                i++;
            
            j = i+1;
            if(i >= n)
                break;
            
            while(j<n && s[j]!=' ')
                j++;
            
            string temp = s.substr(i, j-i);
            
            if(ans.size() != 0)
                ans = temp + " " + ans;
            else
                ans += temp;
            
            i = j+1;
        }
        
        return ans;
    }
};
class Solution {
public:
    string largestMerge(string s1, string s2) 
    {
        string ans = "";
        int i = 0, j = 0;
        
        while(i<s1.size() && j<s2.size())
        {
            if(s1[i] > s2[j])
            {
                ans += s1[i];
                i++;
            }
            
            else if(s1[i] < s2[j])
            {
                ans += s2[j];
                j++;
            }
            
            else if(s1[i] == s2[j])
            {
                int x = i, y = j;
                while(x<s1.size() && y<s2.size())
                {
                    if(s1[x] > s2[y])
                    {
                        ans += s1[i];
                        i++;
                        break;
                    }
                    else if(s1[x] < s2[y])
                    {
                        ans += s2[j];
                        j++;
                        break;
                    }
                    
                    else
                    {
                        x++, y++;
                    }
                }
                
                if(x == s1.size())
                {
                    ans += s2[j];
                    j++;
                }
                else if(y == s2.size())
                {
                    ans += s1[i];
                    i++;
                }
            }
        }
        
        while(i < s1.size())
        {
            ans += s1[i];
            i++;
        }
        while(j < s2.size())
        {
            ans += s2[j];
            j++;
        }
        
        return ans;
    }
};
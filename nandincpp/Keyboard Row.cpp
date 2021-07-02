class Solution {
public:
    vector<string> findWords(vector<string>& words) 
    {
        map<char, int> m1, m2, m3;
        vector<string> ans;
        
        string r1 = "qwertyuiop", r2 = "asdfghjkl", r3 = "zxcvbnm";
        for(auto i : r1)
            m1[i]++;
        for(auto i : r2)
            m2[i]++;
        for(auto i : r3)
            m3[i]++;
        
        for(int i=0;i<words.size();i++)
        {
            string now = words[i];
            bool change_hua_1 = 0;
            
            if(now[0]>='A' && now[0]<='Z')
            {
                now[0] |= ' ';
                change_hua_1 = 1;
            }
            
            bool flag = 1;
            
            if(m1.count(now[0]))
            {
                int j = 1;
                
               while(j < now.size())
               {
                   bool change = 0;
                   if(now[j]>='A' && now[j]<='Z')
                       now[j] |= ' ', change = 1;
                   if(!m1.count(now[j]))
                   {
                       flag = 0;
                       break;
                   }
                   
                   if(change)
                       now[j] &= '_'; 
                   j++;
               }
            }
            
            else if(m2.count(now[0]))
            {
                int j = 1;
                
               while(j < now.size())
               {
                   bool change = 0;
                   if(now[j]>='A' && now[j]<='Z')
                   {
                       now[j] |= ' ';
                       change = 1;
                   }
                   if(!m2.count(now[j]))
                   {
                       flag = 0;
                       break;
                   }
                   if(change)
                       now[j] &= '_'; 
                   j++;
               }
            }
            
            else if(m3.count(now[0]))
            {
                int j = 1;
                
               while(j < now.size())
               {
                   bool change = 0;
                   if(now[j]>='A' && now[j]<='Z')
                       now[j] |= ' ', change = 1;
                   if(!m3.count(now[j]))
                   {
                       flag = 0;
                       break;
                   }
                   if(change)
                       now[j] &= '_'; 
                   j++;
               }
            }
            
            if(change_hua_1)
                now[0] &= '_';
            if(flag)
                ans.push_back(now);
        }
        
        return ans;
    }
};
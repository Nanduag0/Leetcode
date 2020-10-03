class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words)
    {
        vector<int> ans;
        int tot_len=0;
        string p,k;
        int flag=0;
        map<string,int> mp;
        map<string,int> :: iterator it;
        for(int i=0;i<words.size();i++)
        {
            mp[words[i]]++;
        }
        map<string,int> um;
        um=mp;
        int st_len=words[0].length();
        tot_len+=words.size()*st_len;
        for(int i=0;i<s.length();i++)
        {
            mp=um;
            if((s.length()-i)<tot_len)
                break;
            flag=0;
            p=s.substr(i,tot_len);
            int y=0;
            while(y<p.length())
            {
                
                k=p.substr(y,st_len);
                it=mp.find(k);
                if(it!=mp.end() && mp[k]!=0)
                {
                    mp[k]--;
                    y+=st_len;
                    continue;
                }
                else
                {    
                     flag=1;
                     break;
                }
            }
            if(flag!=1)
            {
               ans.push_back(i); 
            }
        }
       return ans; 
    }
};
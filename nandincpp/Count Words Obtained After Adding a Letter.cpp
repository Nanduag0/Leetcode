class Solution {
    unordered_set<string> st;
    
    bool ispossible(string target)
    {
        int n = target.size();
        
       string ok = target.substr(1);
        if(st.count(ok))
            return 1;
        
       for(int i=0;i<n;i++)
       {
           string temp = target.substr(0, i) + target.substr(i+1);
           
           if(st.count(temp))
               return 1;
       }
        
        return 0;
    }
    
public:
    int wordCount(vector<string>& sw, vector<string>& tw) 
    {
        for(auto i : sw)
        {
            sort(i.begin(), i.end());
            st.insert(i);
        }
        
        int ans = 0;
        for(auto i : tw)
        {
            sort(i.begin(), i.end());
            
            if(ispossible(i))
                ans++;
        }
        
        return ans;
    }
};
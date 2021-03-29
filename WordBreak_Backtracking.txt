public:
    vector<string> wordBreak(int n, vector<string>& dict, string s)
    {
        // code here
        string ans="";
        return  wordbreakcall(dict,s,ans,vec);
        
        
    }
     vector<string>   wordbreakcall(vector<string>dict,string s,string ans,vector<string> &vec)
    {
        
        if(s.length()==0)
        {
            ans.erase(ans.end()-1);
            vec.push_back(ans);
            return vec;
            
        }
        for(int i=0;i<s.length();i++)
        {
            string prefix=s.substr(0,i+1);
            if(find(dict.begin(),dict.end(),prefix)!=dict.end())
            {
                string right =s.substr(i+1);
                wordbreakcall(dict,right,ans+prefix+" ",vec);
                
            }
        }
        return vec;
        
    }
    
    
};
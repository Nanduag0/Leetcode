	public:
		vector<string>find_permutation(string S)
		{
		    map <char,int> mp;
		    // Code here there
		    vector<string> ans;
		    for(int i=0;i<S.length();i++)
		    {
		        mp[S[i]]++;
		    }
		    generatepermutation(mp,"",0,S.length(),S,ans);
		    return ans;
		    
		    
		}
        void  generatepermutation(map<char,int> mp,string asf,int indx,int n,string a,vector<string> &ans)
		{
		    if(indx==n)
		    {
		        
		        ans.push_back(asf);
		        return;
		    }
		    for(auto it : mp)
		    {
		        if(mp[it.first]!=0)
		        {
		            mp[it.first]--;
		            generatepermutation(mp,asf+(it.first),indx+1,n,a,ans);
		            mp[it.first]++;
		        }
		        
		    }
		}
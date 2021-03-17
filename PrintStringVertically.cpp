class Solution {
public:
    vector<string> printVertically(string s)
    {
        vector<string> vec;
        vector<string> ans;
        stringstream ss(s);
        int maxim;
        string word;
        set<int,greater<int>> sets;
        string sk="";
        set<int,greater<int>> :: iterator itr;
        
        while(ss>>word)
        {
            vec.push_back(word);
            //cout<<word.length();
            sets.insert(word.length());
            
        }
        itr=sets.begin();
        maxim=*itr;
        
       // cout<<maxim<<"**";
        for(int y=0;y<vec.size();y++)
        {
            //cout<<vec[y].length()<<maxim<<"\n";
            if(vec[y].length()<maxim)
            {
                int o=maxim-vec[y].length();
                while(o>0)
                {
                  vec[y]+=' ';
                  o--;
                }
            }
        }
        char ch[vec.size()][maxim];
        for(int i=0;i<vec.size();i++)
        {
            for(int j=0;j<maxim;j++)
            {
              
                ch[i][j]=vec[i][j];
                
            }
        }
        for(int i=0;i<maxim;i++)
        {
            sk="";
            for(int j=0;j<vec.size();j++)
            {
                sk+=ch[j][i];
            }
            ans.push_back(sk);
        }
        vector<string> res;
        
        for(auto p : ans)
        {
            if(p[p.length()-1]==' ')
            {
                int l=p.length()-1 ;
                while((l)>=0)
                {
                    if(p[l]==' ')
                    {
                        p.erase(l,1);
                    }
                    else
                        break;
                    l--;
                }
            }
            res.push_back(p);
            
        }
        return res;
        
   
    }
};
class Solution {
public:
    int maxUniqueSplit(string s) 
    {
        if(s=="")
            return 0;
        vector<string> vec;
        int maxim=0;
        backtracking(s,0,vec,maxim);
        return maxim;
        
    }
    
    void backtracking(string s,int i,vector<string> &vec,int &maxim)
    {
        if(s.length()==0)
        {
            if(vec.size()>maxim)
            {
                cout<<vec.size();
                maxim=vec.size();
            }
            return;
        }
        for(int index=0;index<s.length();index++)
        {
            string prefix=s.substr(0,index+1);
            if(find(vec.begin(),vec.end(),prefix)!=vec.end())
            {
                continue;
            }
            vec.push_back(prefix);
            backtracking(s.substr(index+1),i,vec,maxim);
            vec.erase(vec.end()-1);
        }
    }
};
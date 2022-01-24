class Solution {
public:
    vector<int> rearrangeArray(vector<int>& a) 
    {
        vector<int> p, n;
        for(auto i : a)
        {
            if(i > 0)
                p.push_back(i);
            else
                n.push_back(i);
        }
        
        vector<int> ans;
        int siz = p.size();
        
        for(int i=0;i<siz;)
        {
            ans.push_back(p[i]);
            ans.push_back(n[i]);
            i++;
        }
        
        return ans;
    }
};
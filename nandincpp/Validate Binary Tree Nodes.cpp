class Solution {
    vector<int> par;
    vector<int> indegree;
    
    int get_super(int x)
    {
        if(x == par[x])
            return x;
        return par[x] = get_super(par[x]);
    }
    
public:
    bool validateBinaryTreeNodes(int n, vector<int>& left, vector<int>& right) 
    {
        par.resize(n);
        indegree.resize(n, 0);
        
        for(int i=0;i<n;i++)
            par[i] = i;
        
        for(int i=0;i<n;i++)
        {
            int sup_p1 = get_super(i);
            
            if(left[i] >= 0)
            {
                int sup_p2 = get_super(left[i]);
                indegree[left[i]]++;
                
                if(sup_p1==sup_p2 || indegree[left[i]]>1)
                    return 0;
                
                par[sup_p2] = sup_p1;
            }
            
            if(right[i] >= 0)
            {
                int sup_p2 = get_super(right[i]);
                indegree[right[i]]++;
                
                if(sup_p1==sup_p2 || indegree[right[i]]>1)
                    return 0;
                
                par[sup_p2] = sup_p1;
            }
        }
        
        int temp = 0;
        for(int i=0;i<n;i++)
        {
            temp += (par[i]==i)?1:0;
        }
        
        return temp==1;
    }
};
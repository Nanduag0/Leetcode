class Solution {
public:
    int lastStoneWeight(vector<int>& stones)
    {
        priority_queue<int> p;
        
        for(int i=0;i<stones.size();i++)
        {
            p.push(stones[i]);
        }
        
        while((int)(p.size()) > 1)
        {
            int upar = p.top();
            p.pop();
            int s_upar = p.top();
            p.pop();
            
            if(upar != s_upar)
            {
                p.push(upar - s_upar);
            }
                
        }
        
        if(p.size() > 0)
            return p.top();
        
        else
            return 0;
    }
};
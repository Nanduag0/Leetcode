class Solution {
public:
    int minSwaps(string s)
    {
        stack<int> stk;
        
        for(auto i : s)
        {
            if(i == '[')
                stk.push(i);
            else
            {
                if(!stk.empty())
                    stk.pop();
            }
        }
        
        return (stk.size()+1)>>1;
    }
};
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) 
    {
        int j = 0;
        stack<int> s;
        
        for(auto &i : pushed)
        {
            s.push(i);
            
            while(!s.empty() && s.top()==popped[j])
            {
                s.pop();
                j++;
            }
        }
        
        return (j == popped.size());
    }
};
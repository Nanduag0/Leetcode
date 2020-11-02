class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids)
    {
        stack<int> s;
        
        for(int i : asteroids)
        {
            bool flag = 1;
            
            while(!s.empty() && i<0 && s.top()>0)
            {
                if(abs(i) > s.top())
                {
                    //flag = 0;
                    s.pop();
                }
                
                else if(abs(i) < s.top())
                {
                    flag = 0;
                    break;}
                
                else
                {
                    s.pop();
                    flag = 0;
                    break;
                }
            }
            
            if(flag)
                s.push(i);
        }
        
        vector<int> ans;
        
        while(!s.empty())
        {
            ans.push_back(s.top());
            s.pop();
        } 
        
         reverse(ans.begin(), ans.end());
        return ans;
        
    }
};
class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& h)
    {
        stack<int> s;
        vector<int> ans;
        
        for(int i=h.size()-1;i>=0;i--)
        {
            int cnt = 0;
            while(!s.empty() && h[i]>=s.top())
            {
                cnt++;
                s.pop();
            }
            
            cnt += !s.empty();
            ans.push_back(cnt);
            s.push(h[i]);
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
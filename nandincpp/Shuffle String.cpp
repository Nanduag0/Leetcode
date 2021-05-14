class Solution {
public:
    string restoreString(string s, vector<int>& indices) 
    {
        priority_queue< pair<int, int> > pq;
        for(int i=0;i<indices.size();i++)
            pq.push({indices[i], i});
        
        string ans =  "";
        while(!pq.empty())
        {
            auto p1 = pq.top();
            pq.pop();
            
            ans += s[p1.second];
        }
        
        reverse(ans.begin(), ans.end());
        return  ans;
    }
};
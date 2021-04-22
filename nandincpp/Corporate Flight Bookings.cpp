class Solution {
    vector<int> ans;
public:
    vector<int> corpFlightBookings(vector<vector<int>>& book, int n)
    {
        int N = book.size();
        ans.resize(n, 0);
        vector<int> anss(n, 0);
        
        for(int i=0;i<N;i++)
        {
            int start = book[i][0]-1, end = book[i][1];
            
            ans[start] += book[i][2];
            
            if(end < n)
                ans[end] -= book[i][2];
        }
        
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            sum += ans[i];
            anss[i] = sum;
        }
        
        return anss;
    }
};
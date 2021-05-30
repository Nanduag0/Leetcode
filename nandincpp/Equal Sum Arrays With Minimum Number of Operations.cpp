class Solution {
public:
    int minOperations(vector<int>& a1, vector<int>& a2) 
    {
        if(a1.size()*6<a2.size()*1 || a2.size()*6<a1.size())
            return -1;
        
        int sum1 = 0, sum2 = 0;
        for(int i=0;i<a1.size();i++)
            sum1 += a1[i];
        for(int i=0;i<a2.size();i++)
            sum2 += a2[i];
        
        if(sum1 > sum2)
            swap(a1, a2);
        
        int diff = abs(sum1 - sum2);
        priority_queue<int> q1(a2.begin(), a2.end());
        priority_queue<int, vector<int>, greater<int>> q2(a1.begin(), a1.end());
        
        int cnt = 0;
        
        while(diff > 0)
        {
            if(!q1.empty() && q1.top()-1 > 6-q2.top())
            {
                diff -= q1.top()-1;
                q1.pop();
            }
            
            else
            {
                diff -= 6-q2.top();
                q2.pop();
            }
            
            cnt++;
        }
        
        return cnt;
    }
};
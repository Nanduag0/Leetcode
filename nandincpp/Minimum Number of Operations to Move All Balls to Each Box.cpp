class Solution {
public:
    vector<int> minOperations(string box)
    {
        int n = box.size();
        int left_one = box[0]=='1' ? 1 : 0;
        int right_one = box[n-1]=='1' ? 1 : 0;
        vector<int> pre(n,0), suf(n,0);
        
        //left to right
        for(int i=1;i<n;i++)
        {
            pre[i] = pre[i-1] + left_one;
            
            if(box[i] == '1')
                left_one++;
        }
        
        //right to left
        for(int i=n-2;i>=0;i--)
        {
            suf[i] = suf[i+1] + right_one;
            
            if(box[i] == '1')
                right_one++;
        }
        
        vector<int> ans(n);
        for(int i=0;i<n;i++)
            ans[i] = suf[i]+pre[i];
        
        return ans;
    }
};
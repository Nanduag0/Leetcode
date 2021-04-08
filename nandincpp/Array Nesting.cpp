class Solution {
    unordered_set<int> s;
public:
    int arrayNesting(vector<int>& nums)
    {
        int n = nums.size();
        int ans = 0;
        
        //vector<int> v;
        for(int i=0;i<n;i++)
        {
            int start = nums[i];
            if(s.find(start) != s.end())
                continue;
            
            int count = 1;
            s.insert(start);
            start = nums[start];
            
            while(start != nums[i])
            {
                s.insert(start);
                start = nums[start];
                count++;
            }
            
            ans = max(ans,count);
        }
        return ans;
    }
};
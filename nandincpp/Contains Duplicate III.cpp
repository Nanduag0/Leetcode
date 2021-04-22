class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) 
    {
        multiset<long> m;
        int j=0, n=nums.size();
        
        for (int i=0; i<n; ++i) 
        {
            if (i-j>k) 
                m.erase(m.find(nums[j++]));
            
            long lower=(long)nums[i]-(long)t, upper=(long)nums[i]+(long)t;
            
            auto it=m.lower_bound(lower);
            if (it!=m.end()&&*it<=upper) 
                return true;
            m.insert(nums[i]);
        }
        return false;
    }
};
class FindSumPairs {
    unordered_map<int, int> m2;
    vector<int> nums1, nums2;
    int ans;
    
public:
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) 
    {
        this->nums1 = nums1;
        this->nums2 = nums2;
        
        //ans = 0;
        for(auto j : nums2)
            m2[j]++;
    }
    
    void add(int index, int val) 
    {
        m2[nums2[index]]--;
        
        nums2[index] += val;
        m2[nums2[index]]++;
    }
    
    int count(int tot)
    {
        ans = 0;
        for(auto i : nums1)
        {
           ans += (m2[tot-i]);
        }
        return ans;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */
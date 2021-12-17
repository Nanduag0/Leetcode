class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int> st;
        for(int i=0;i<(int)nums.size();i++)
            if(nums[i]>0)
                st.insert(nums[i]);
        int prv=0;
        for(auto x:st)
        {
            if(x>prv+1)
                return prv+1;
            prv++;
        }
        return prv+1;
    }
};

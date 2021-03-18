class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
       // int j = nums.size()-k;
        if(nums.size() < k)
        {
            int n = nums.size();
            k = k%n;
            //reverse(nums.begin(), nums.end());
        }
        
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
        
    }        
    
};
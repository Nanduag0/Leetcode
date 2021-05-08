class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) 
    {
        
        int i=0,j=0,sum=0;
        vector<int> ans;
        int maxim=INT_MIN;
        map<int,int> mp;
        map<int,int> :: iterator it;
        if(nums.size()==0)
        {
            return ans;
            
        }
        else
            if(nums.size()==1)
            {
                return nums;
                
            }
        while(j<nums.size())
        {
            mp[nums[j]]++;
            if(j-i+1==k)
            {
                auto it=mp.rbegin();
                ans.push_back(it->first);
                auto itr = mp.find(nums[i]);
                mp[nums[i]]--;
                if(mp[nums[i]]==0)
                {
                    mp.erase(itr);
                }
                i++;
            }
          
            j++;
        }
        return ans;
    
    }
};
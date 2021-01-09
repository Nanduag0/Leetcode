class Solution {
public:
    void wiggleSort(vector<int>& nums) {
	vector<int> v(nums.size());
	sort(nums.begin(),nums.end());
	int j=nums.size()-1;
	for(int i=1;i<nums.size();i=i+2)
	{
		v[i]=nums[j--];
	}
	for(int i=0;i<nums.size();i=i+2)
	{
		v[i]=nums[j--];
	}
	nums=v;
}
};
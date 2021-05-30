class Solution {
public:
	int maxResult(vector<int>& nums, int k)
    {
		int len = nums.size();
		if(len == 0) 
            return 0;
        
		deque<pair<int,int>> q; 
		q.push_back( {nums[0], 0} );
        
		for(int i = 1; i < len ; i++)
        {
			while(!q.empty() && q.back().second+k < i )
            {
				q.pop_back();
			}
			int val = nums[i] + q.back().first;
			
			while( !q.empty() && (q.front().second+k < i || q.front().first <= val) )
            {
				q.pop_front();
			}
			q.push_front( {val, i} );
		}
        
		while(len-1 != q.back().second) 
            q.pop_back();
        
		return q.back().first;
	}
};
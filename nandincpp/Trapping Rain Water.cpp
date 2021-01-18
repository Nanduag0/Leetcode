class Solution {
public:
    int trap(vector<int>& height)
{
        int water=0;
        int left_max=0;
        int right_max=0;
        int start=0;
        int end=height.size()-1;

        while(start < end)
    {
        if(height[start] < height[end])
        {
            if(height[start] > left_max)
                left_max = height[start];
                
            else
                water += left_max-height[start];
            
            start++;
                   
        }

        else
        {
            if(height[end]>right_max)
                right_max=height[end];
            else
                 water+=right_max-height[end];
            end--;
        }
	}
        return water;
}
 };
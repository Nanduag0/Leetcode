class Solution {
public:
    int maxArea(vector<int>& height)
    {
        int area = 0;
        int n = height.size();
        
        int i=0, j=n-1;
        
        while(i < j)
        {
            area = max(area, min(height[j], height[i])*(j-i));
            
            if(height[j] > height[i])
                i++;
            
            else
                j--;
        }
        
        return area;
    }
};
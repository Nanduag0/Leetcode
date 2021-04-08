class Solution {
    int largestRectangleArea(vector<int>& height) 
    {
        int area = 0;
        height.push_back(0);
        stack<int> hei, pos;
        
        int n = height.size();
        for(int i=0;i<n;i++)
        {
            int last_width = INT_MAX;
            
            while(!hei.empty() && hei.top()>height[i])
            {
                last_width = pos.top();
                
                int cur_area = (i-last_width)*hei.top();
                pos.pop(), hei.pop();
                area = max(area, cur_area);
            }
            
            if(hei.empty() || hei.top()<height[i])
            {
                hei.push(height[i]);
                pos.push(min(i, last_width));
            }
        }
        
        return area;
    }
public:
    int maximalRectangle(vector<vector<char>>& mat) 
    {        
        if(mat.size() == 0) return 0;
        
        vector<int> pass(mat[0].size(),0);
        int ans=0;
        for(int i=0;i<mat.size();i++) {
            for(int j=0;j<mat[0].size();j++) 
            {
                if(mat[i][j]=='0')
                    pass[j]=0;
                else 
                    pass[j]+=(mat[i][j]-'0');
            }
            ans=max(ans,largestRectangleArea(pass));
        }
        
        return ans;        
    }
};
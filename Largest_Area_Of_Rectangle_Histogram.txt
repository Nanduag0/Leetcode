class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
        stack<int> stacks;
        vector<int> left(heights.size()),right(heights.size());
        
        for(int i=0;i<heights.size();i++)
        {
            if(empty(stacks))
            {
                left[i]=0;
                stacks.push(i);
                
            }
            else
            {
                while(!empty(stacks) &&  heights[stacks.top()]>=heights[i])
                {
                    stacks.pop();
                    
                }
                left[i]=(stacks).empty()?0:stacks.top()+1;
                stacks.push(i);
                
            }
        }
        while(!empty(stacks))
        {
            stacks.pop();
        }
        for(int i=heights.size()-1;i>=0;i--)
        {
            if(empty(stacks))
            {
                right[i]=heights.size()-1;
                stacks.push(i);
                
            }
            else
            {
                while(!empty(stacks) && heights[stacks.top()]>=heights[i])
                {
                    stacks.pop();
                    
                }
                right[i]=stacks.empty()?heights.size()-1:stacks.top()-1;
                stacks.push(i);
                
            }
        }
        int maxarea=INT_MIN;
        for(int i=0;i<heights.size();i++)
        {
            maxarea=max(maxarea,(right[i]-left[i]+1)*heights[i]);
            
        }
        return maxarea;
        
        
    }
};
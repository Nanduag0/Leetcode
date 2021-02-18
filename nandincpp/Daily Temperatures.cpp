class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        vector<int> ans;
        int n = T.size(),stack[n],i=n-1,top = -1;
        stack[++top] = i;
        ans.push_back(0);
        i--;
        while(i>=0)
        {
            if(T[i]< T[stack[top]])
            {
                stack[++top] = i ;
                ans.push_back(1);
            }
            else{
                while(top!=-1 && T[i]>= T[stack[top]])
                    top--;
                if(top == -1)
                    ans.push_back(0);
                else
                    ans.push_back(stack[top]-i );
                stack[++top] = i;
            }
            i--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
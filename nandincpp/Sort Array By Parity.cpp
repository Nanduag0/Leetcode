class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A)
    {
        int n = A.size();
        
        for(int i=0;i<n;i++)
        {
            if(A[i]&1)
            {
                A.push_back(A[i]);
                A[i] = -1;
            }
        }
        
       vector<int> ans;
        for(int i=0;i<A.size();i++)
        {
            if(A[i] != -1)
                ans.push_back(A[i]);
        }
        return ans;
    }
};
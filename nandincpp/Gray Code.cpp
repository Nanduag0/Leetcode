class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> ans;
        
        int x = pow(2, n);
        
        for(int i = 0; i < x; ++i)
        {
            ans.push_back(i ^ (i>>1)); 
        }
        return ans;
    }
};



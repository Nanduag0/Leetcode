class Solution {
public:
    bool isIdealPermutation(vector<int>& A)
    {
        for(int i=0;i<A.size();i++)
            if(abs(i - A[i]) > 1)
                return 0;
        
        return 1;
    }
};
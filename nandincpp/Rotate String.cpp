class Solution {
public:
    bool rotateString(string A, string B)
    {
        if(A.size() != B.size())
            return 0;
        
        string doub = B + B;
        int index = doub.find(A);
        
        if(index == -1)
            return 0;
        
        return 1;
    }
};
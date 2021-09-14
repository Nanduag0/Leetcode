class Solution {
public:
    vector<int> circularPermutation(int n, int start) 
    {
        int x = pow(2, n);  
        vector<int> gray(x, 0);
        
        for(int i=0;i<x;i++)
            gray[i] = i ^ (i>>1);
        
        int i;
        for(i=0;i<x;i++)
            if(gray[i] == start)
                break;
        
        reverse(gray.begin()+i, gray.end());
        reverse(gray.begin(), gray.begin()+i);
        reverse(gray.begin(), gray.end());
        
        return gray;
    }
};
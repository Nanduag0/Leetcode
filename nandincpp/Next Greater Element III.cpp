class Solution {
public:
    int nextGreaterElement(int n)
    {
        string s = to_string(n);
        
        next_permutation(s.begin(), s.end());
        int x = stoll(s);
        
        return (x>INTa_MAX||x<=n) ? -1 : x;
    }
};
#define ll long long
class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) 
{
    vector<bool> res;
    int n = A.size();
    
    int num = 0;
    
    for(int i = 0; i < n; i++)
    {
        num = num * 2 + A[i];
        if(num % 5 == 0)
            res.push_back(true);
        else
            res.push_back(false);
        num = num % 5;    
    }
    
    return res;
}
};
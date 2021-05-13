class Solution {
    int help(string s1, string s2)
    {
        int ans = 0;
        int i = 0, j = 0;
        
        while(i < s1.size())
        {
            j = i;
            while(s1[i] != s2[j])
                j++;
            
            while(i < j)
            {
                ans++;
                swap(s2[j], s2[j-1]);
                j--;
            }
            i++;
        }
        return ans;
    }
    
public:
    int getMinSwaps(string num, int k) 
    {
        string copy = num;
        
        while(k--)
            next_permutation(num.begin(), num.end());
        
        return help(copy, num);
    }
};
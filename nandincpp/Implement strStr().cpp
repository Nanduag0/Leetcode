class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        if(!needle.size())
            return 0;
        
        return haystack.find(needle);
    }
};
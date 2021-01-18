class Solution {
    
public:
    int countVowelStrings(int n)
    {
     
        
        //observe pattern for each n.
        return (n+1)*(n+2)*(n+3)*(n+4)/24;
    }
};
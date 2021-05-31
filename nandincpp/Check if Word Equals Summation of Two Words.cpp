class Solution {
    int conv(string x)
    {
        int ans = 0;
        for(int i=0;i<x.size();i++)
        {
             ans = ans*10 + (x[i]-'a');
        }  
        
        return ans;
    }
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) 
    {
        int first = conv(firstWord);
        int seco = conv(secondWord);
        int tar = conv(targetWord);
        
        return (first+seco==tar);
    }
};
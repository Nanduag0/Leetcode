class Solution {
public:
    int longestOnes(vector<int>& s, int k) 
    {
        int start = 0, end = 0, zero = 0, length = 0;
        //vector<int> freq(2, 0);
        int n = s.size();
        
        for(int end=0;end<n;end++)
        {
            if(s[end] == 0)
                zero++;
            
            while(zero > k)
            {
                if(s[start] == 0)
                    zero--;
                start++;
            }
            
            length = max(length, end-start+1);
        }
        
        return length;
    }
};
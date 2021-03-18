class Solution {
public:
    int minimumLength(string s)
    {
        int left = 0, right = s.size() - 1;
        
        char temp; 
        
        while (left < right)
        {
            if (s[left] != s[right])
                return right - left + 1;
      
            temp = s[left]; 
            
            while (left < right && s[left] == temp)
                left++;
            while (left < right && s[right] == temp) 
                right--;
        }
        
        return temp == s[right] ? 0 : 1;
    
    }
};
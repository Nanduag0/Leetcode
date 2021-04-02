class Solution {
    
    int ans = 0;
    int countSubstrings(int i, string& a)
    {
        int k = 0;
        int n = a.size();
        
        while(i-k>=0 && i+k<n)
        {
            if(a[i-k] == a[i+k])
                ans++, k++;
            
            else
                break;
        }
        
        int j = i+1;
        while(i>=0 && j<n)
        {
            if(a[i] == a[j])
                 ans++, i--, j++;
            else
                 break;
        }
        return ans;
    }
public:
    int countSubstrings(string a)
                 {
                     for(int i=0;i<a.size();i++)
                     {
                        countSubstrings(i, a); 
                     }
                     
                     return ans;
                 }
};
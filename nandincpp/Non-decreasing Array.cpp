class Solution {
public:
    bool checkPossibility(vector<int>& a) 
    {
        int c = 0, n = a.size();
        
        if(n <= 1)
            return 1;
               
        
        for(int i=1;i<n;i++)
        {
            if(a[i] < a[i-1])
                c++;
           
            if(i-2>=0 && i+1<n && a[i]<a[i-2] && a[i-1]>a[i+1])
                return 0;
        }
        
        if(c > 1)
        return 0;
        
        return 1;
    }
};
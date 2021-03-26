class Solution {
public:
    int removeDuplicates(vector<int>& a) 
    {
        int n = a.size(), cnt = 1, i = 1;
        
        if(n <= 1)
            return a.size();
        
       while(i < a.size())
       {
           if(a[i] == a[i-1])
             {
                 cnt++;
           
                 if(cnt > 2)
                     {
                        a.erase(a.begin() + i);
                        i--;
                        cnt--;
                    }
             }
        
         else
            cnt = 1;
           
            i++;
       }
        
        return a.size();
    }
};
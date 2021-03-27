class Solution {
public:
    vector<int> prevPermOpt1(vector<int>& a)
    {
        int n = a.size();
        int i = n - 2;
        
        while(i >= 0)
        {
            if(a[i] > a[i+1])
                break;
            
            i--;
        }
        
        if(i == -1)
            return a;
        
        int j = i + 1;
        for (int k = j; k < a.size() && a[k] < a[i]; ++k) 
        {
            j = a[k] > a[j] ? k : j; 
        }

        swap(a[i], a[j]);
        return a;
    }
};
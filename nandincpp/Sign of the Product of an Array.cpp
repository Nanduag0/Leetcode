class Solution {
public:
    int arraySign(vector<int>& a)
    {
        int neg = 0;
        bool flag = 1;
        
        for(int i=0;i<a.size();i++)
        {
            if(a[i] < 0)
                neg++;
            if(a[i] == 0)
            {
                flag = 0;
                break;
            }
        }
        
        if(!flag)
            return 0;
        
        int product = (neg%2==0) ? 1 : -1;
        
        return product;
    }
};
class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) 
    {
        int n=code.size();
        vector<int> decode(n,0);
        
        if(k==0)
            return decode;
        
        else if(k<0)
        {
            int sum=0;
            for(int i=0;i<-k;i++)
                sum+=code[i%n];
            for(int i=-k;i<n-k;i++)
            {
                decode[i%n]=sum;
                sum+=code[i%n]-code[(i+k)%n];
            }
        }
        else
        {
            int sum=0;
            for(int i=1;i<=k;i++)
                sum+=code[i];
            for(int i=0;i<n;i++)
            {
                decode[i]=sum;
                sum+=code[(i+1+k)%n]-code[(i+1)%n];
            }
        }
        return decode;
    }
};
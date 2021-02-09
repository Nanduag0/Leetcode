class Solution {
public:
    int reverse( int x) {
      int s=0,n;
       if(x>=INT_MAX||x<=INT_MIN)
           return 0;
        while(abs(x)>0)
        {
            n=x%10;
            if(s>INT_MAX/10||s<INT_MIN/10)
              return 0;
            s=s*10+n;
            x=x/10;
        }
     
        if(s>=INT_MAX||s<=INT_MIN)
           return 0;
        return s;
    }
};
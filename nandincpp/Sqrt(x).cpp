class Solution {
public:
      int mySqrt(int x) {
       long long int low=0,upp=x,mid;
        mid=(low+upp)/2;
        while(low<=upp){
            if((mid*mid)>x){
                upp=mid-1;
            }
            else{
                low=mid+1;
            }
            mid=(low+upp)/2;  
        }
        return mid;
    }
};
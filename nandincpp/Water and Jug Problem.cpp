class Solution {
    int gcd(int a,int b)
	{
	    if(b==0)
	        return a;
        if(a==0)
            return b;
	    return gcd(b,a%b);
	}
public:
    bool canMeasureWater(int x, int y, int z)
    {
        if(x+y < z)
            return 0;
        if(x==z || y==z)
            return 1;
        return(z%gcd(x, y) == 0);
    }
};
class Solution {
public:
    int findMinFibonacciNumbers(int k) 
    {
        vector<int> fib;
        fib.push_back(1);
        fib.push_back(1);
        
        int a = 1, b = 1, c = 2;
        fib.push_back(c);
        while(c <= k)
        {
            a = b;
            b = c;
            c = a+b;
            
            fib.push_back(c);
        }
        
        if(fib.back() > k)
            fib.pop_back();
        
        int cnt = 0;
        
        while(k > 0)
        {
            k -= fib.back();
            
            while(fib.size()>0 && fib.back()>k)
                fib.pop_back();
            
            cnt++;
        }
        
        return cnt;
    }
};
class Solution {
public:
    vector<string> fizzBuzz(int N) 
    {
        vector<string> ans;
        
        for(int n=1;n<=N;n++)
        {
            if(n%3==0 && n%5==0)
               ans.push_back("FizzBuzz");
            else if(n%3 == 0)
                ans.push_back("Fizz");
            else if(n%5 == 0)
                ans.push_back("Buzz");
            
            else
                ans.push_back(to_string(n));
        }
        
        return ans;
    }
};
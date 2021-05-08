class Solution{
  public:
    // Function to return if the paranthesis are balanced or not
    bool ispar(string x)
    {
        // Your code here
        stack<char> ss;
        int i=0;
        while(i<x.length())
        {
            if(ss.empty())
            {
                ss.push(x[i]);
            }
            else
            if(x[i]==']')
            {
                if(ss.top()=='[')
                {
                    ss.pop();
                }
                else
                return false;
            }
            else
            if(x[i]==')')
            {
                if(ss.top()=='(')
                {
                    ss.pop();
                }
                else
                return false;
            }
            else
            if(x[i]=='}')
            {
                if(ss.top()=='{')
                {
                    ss.pop();
                    
                }
                else 
                return false
            }
            else
            ss.push(x[i]);
            
            i++;
        }
        if(ss.empty())
        {
            return true;
        }
        return false;
        
    }

};

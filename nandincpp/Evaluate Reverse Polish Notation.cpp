class Solution {
public:
    int evalRPN(vector<string>& tokens) 
    {
        vector<int> stk;
        for(auto i : tokens)
        {
            if(i=="+" || i=="-" || i=="*" || i=="/")
            {
               auto p1 = stk.back();
                stk.pop_back();
                auto p2 = stk.back();
                stk.pop_back();
                
                if(i == "+")
                    stk.push_back(p1+p2);
                if(i == "-")
                    stk.push_back(-p1+p2);
                if(i == "*")
                    stk.push_back(p1*p2);
                if(i == "/")
                    stk.push_back(p2/p1);
            }
            
            else
                stk.push_back(stoi(i));
        }
                   
        return stk[0];
    }
};
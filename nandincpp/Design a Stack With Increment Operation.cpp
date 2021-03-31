class CustomStack {
    vector<int> stk;
    int n;
public:
    CustomStack(int maxSize) 
    {
        n = maxSize;
    }
    
    void push(int x) 
    {
        if(n == stk.size())
        {
            return ;
        }
        
        stk.push_back(x);
    }
    
    int pop() 
    {
        if(stk.empty())
            return -1;
        
        int xx = stk.back();
        stk.pop_back();
        return xx;
    }
    
    void increment(int k, int val) 
    {
        for(int i=0;i<min(k, (int)stk.size());i++)
            stk[i] += val;
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
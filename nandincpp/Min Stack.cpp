class MinStack {
    vector<int> v;
    int mini = INT_MAX;
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) 
    {
        v.push_back(x);
    }
    
    void pop()
    {
        v.pop_back();
        mini = INT_MAX;
    }
    
    int top() 
    {
        int ss = v.size();
        int xx = v[ss - 1];
        return xx;
    }
    
    int getMin() 
    {
        for(int i=0;i<v.size();i++)
            mini = min(mini, v[i]);
        
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
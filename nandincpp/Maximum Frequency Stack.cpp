class FreqStack {
    unordered_map<int, int> freq;
    unordered_map<int, stack<int>> stack_freq;
    int max_freq = 0;
    
public:
    FreqStack() {
        
    }
    
    void push(int x)
    {
        freq[x]++;
        max_freq = max(max_freq, freq[x]);
        
        stack_freq[freq[x]].push(x);
    }
    
    int pop() 
    {
        if(max_freq < 0)
            return -1;
        
        int topp = stack_freq[max_freq].top();
        stack_freq[max_freq].pop();
        
        freq[topp]--;
        
        if(stack_freq[max_freq].size() == 0)
        {
            stack_freq.erase(max_freq);
            max_freq--;
        }
        
        return topp;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 */
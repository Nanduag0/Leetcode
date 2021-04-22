class MyStack {
    queue<int>q1,q2;
public:
    /** Initialize your data structure here. */
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        q1.push(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int s=q1.size(),ans;
        while(!q1.empty()){
            if(s==1){
                ans=q1.front();
                break;
            }
           int a=q1.front();
            q1.pop();
            q2.push(a);
            s--;
        }
        q1.pop();
        while(!q2.empty()){
             int b=q2.front();
            q2.pop();
            q1.push(b);
        }
        return ans;
    }
    
    /** Get the top element. */
    int top() {
        int a=q1.back();
        return a;
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        if(q1.empty())
            return true;
        return false;
    }
};


/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
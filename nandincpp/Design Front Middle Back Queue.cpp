class FrontMiddleBackQueue {
    vector<int> v;
    
public:
    FrontMiddleBackQueue() {
        
    }
    
    void pushFront(int val) 
    {
        v.insert(v.begin(), val);
    }
    
    void pushMiddle(int val) 
    {
        v.insert(v.begin()+v.size()/2, val);
    }
    
    void pushBack(int val) 
    {
        v.push_back(val);
    }
    
    int popFront() 
    {
        if(v.size() == 0)
            return -1;
        
        int curr = v[0];
        v.erase(v.begin());
        return curr;
    }
    
    int popMiddle() 
    {
        if(v.empty())
            return -1;
        
        int curr = v[(v.size()-1)/2];
        v.erase(v.begin()+(v.size()-1)/2);
        return curr;
    }
    
    int popBack() 
    {
        if(v.size() == 0)
            return -1;
        
        int x = v.back();
        v.pop_back();
        return x;
    }
};

/**
 * Your FrontMiddleBackQueue object will be instantiated and called as such:
 * FrontMiddleBackQueue* obj = new FrontMiddleBackQueue();
 * obj->pushFront(val);
 * obj->pushMiddle(val);
 * obj->pushBack(val);
 * int param_4 = obj->popFront();
 * int param_5 = obj->popMiddle();
 * int param_6 = obj->popBack();
 */
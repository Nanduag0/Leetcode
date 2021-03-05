class StockSpanner {
    int index = -1;
    stack<pair<int, int>> s;
    
public:
    StockSpanner() {
        
    }
    
    int next(int price) 
    {
        index++;
        
        while(!s.empty() && s.top().first<=price)
            s.pop();
        
        if(s.empty())
        {
            s.push({price, index});
            return index+1;
        }
        
        int topp = s.top().second;
        s.push({price, index});
        
        return (index-topp);
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
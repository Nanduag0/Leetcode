class StockPrice {
    map<int, int> stock, minmax;
    int curr = -1;
    
public:
    StockPrice() {
        
    }
    
    void update(int timestamp, int price) 
    {
        if(stock.count(timestamp))
        {
            int prev = stock[timestamp];
            minmax[prev]--;
            
            if(minmax[prev] == 0)
                minmax.erase(prev);
        }
        
        stock[timestamp] = price;
        minmax[price]++;
        curr = max(curr, timestamp); 
    }
    
    int current() 
    {
        return stock[curr];
    }
    
    int maximum() 
    {
        auto maxi = minmax.rbegin();
        return maxi->first;
    }
    
    int minimum() 
    {
        auto mini = minmax.begin();
        return mini->first;
    }
};

/**
 * Your StockPrice object will be instantiated and called as such:
 * StockPrice* obj = new StockPrice();
 * obj->update(timestamp,price);
 * int param_2 = obj->current();
 * int param_3 = obj->maximum();
 * int param_4 = obj->minimum();
 */
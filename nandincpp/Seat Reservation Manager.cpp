class SeatManager {
    priority_queue<int, vector<int>, greater<int> >pq; //unreserve
public:
    SeatManager(int n) 
    {        
        for(int i=1;i<=n;i++)
            pq.push(i);
    }
    
    int reserve() 
    {
        auto topp = pq.top();
        pq.pop();
        return topp;
    }
    
    void unreserve(int seatNumber)
    {
        pq.push(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */
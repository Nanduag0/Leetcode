class ExamRoom {
public:
    set<int> seats;
    int size;
    ExamRoom(int N):size(N){
    }
    
    int seat() {
        if(seats.empty()){
            seats.insert(0);
            return 0;
        }
        
        int prev = *begin(seats);
        int dist = prev;
        int seatAt = 0;
        
        for(auto &s : seats){
            int currDist = (s - prev)/2;
            if(currDist > dist){
                dist = currDist;
                seatAt = prev + currDist;
            }
            
            prev = s;
        }
        
        if(*(seats.rbegin()) != size - 1){
            int currDist= size - 1 - *(seats.rbegin());
            if(currDist > dist){
                seatAt = size - 1;
            }
        }
        
        seats.insert(seatAt);
        return seatAt;
    }
    
    void leave(int p) {
        seats.erase(p);
    }
};

/**
 * Your ExamRoom object will be instantiated and called as such:
 * ExamRoom* obj = new ExamRoom(N);
 * int param_1 = obj->seat();
 * obj->leave(p);
 */
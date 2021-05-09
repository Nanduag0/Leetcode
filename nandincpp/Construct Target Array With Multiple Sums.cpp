class Solution {
public:
    bool isPossible(vector<int>& target) {
        priority_queue<int> pq;
        long sum = 0;
        
        for(int x: target){
            sum += x;
            pq.push(x);
        }
        
        while(!pq.empty()){
            int top = pq.top();
            pq.pop();
            
            if(top == 1){
                return true;
            }
            
            long others = sum - top;
            
            if(others == 0){
                return false;
            }
            if(others == 1){
                return true;
            }
            // cannot bring it to 1 by subtracting sum(all except top) - top
            if(others >= top){
                return false;
            }
            others = top % others;
            if(others == 0){
                return false;
            }
            
            sum = sum - (top - others);
            pq.push(others);
        }
        
        return true;
    }
};
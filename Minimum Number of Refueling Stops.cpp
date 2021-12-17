class Solution {
public:
    int minRefuelStops(int target, int tot_fuel, vector<vector<int>>& stations) {
        priority_queue<int> pq;
        int prv=0,ans=0;
        int curpos,capacity;
        for(auto x:stations)
        {
            curpos=x[0];
            capacity=x[1];
            tot_fuel=tot_fuel-(curpos-prv);
            while(!pq.empty() && tot_fuel<0)
            {
                tot_fuel+=pq.top();
                pq.pop();
                ans++;
            }
            if(tot_fuel<0)
                return -1;
            if(curpos>=target)
                return ans;
            prv=curpos;
            pq.push(capacity);
        }
         tot_fuel=tot_fuel-(target-prv);
         while(!pq.empty() && tot_fuel<0)
            {
                tot_fuel+=pq.top();
                pq.pop();
                ans++;
            }
            if(tot_fuel<0)
                return -1;
        return ans;
    }
};

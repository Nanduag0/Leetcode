class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
    {
        int gas_sum = 0, cost_sum = 0;
        int n = gas.size();
        
        for(int i=0;i<n;i++)
        {
            gas_sum += gas[i];
            cost_sum += cost[i];
        }
        
        if(cost_sum > gas_sum)
            return -1;
        
        int pos = 0, prev = INT_MIN, diff = 0;
        for(int i=0;i<n;i++)
        {
            diff += (gas[i] - cost[i]);
            
            if(diff < 0)
            {
                pos = i+1;
                diff = 0;
            }
        }
        
        return pos;
    }
};
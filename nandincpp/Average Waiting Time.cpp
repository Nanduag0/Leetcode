class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& cus)
    {
        int start = cus[0][0], finish = cus[0][0]+cus[0][1];
        double wait = finish - start;
        
        for(int i=1;i<cus.size();i++)
        {
            wait += (finish-cus[i][0] > 0) ? finish-cus[i][0] : 0;
            start = max(finish, cus[i][0]);
            finish = start + cus[i][1];
            
            wait += cus[i][1];
        }
        
        int n = cus.size();
        //cout<<wait<<endl;
        double avg = wait/n;
        return (double)(wait/n);
    }
};
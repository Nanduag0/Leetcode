class Solution {
public:
    int eatenApples(vector<int>& v, vector<int>& days) 
    {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> p; //min heap
        
        int i=0;
        int d = 1;
        
        int cnt = 0;
        
        while(i<v.size() or (!p.empty()))
        {
            if(i<v.size())
                p.push({d+days[i],v[i]});
            
			// to check if the apple has rotten by now or not
            while(!p.empty() and d>=p.top().first)
                p.pop();
            
            if(!p.empty())
            {
                auto a = p.top(); 
                a.second--;
                p.pop();
                p.push(a);
                cnt++;
                
                if(p.top().second==0)
                    p.pop();
            }
            
            i++;
            d++;
        }
        
        return cnt;
    }
};
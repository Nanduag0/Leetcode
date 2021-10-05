class DetectSquares {
    vector<pair<int, int>> p_store;
    int cnt_p[1001][1001] = {};
    
public:
    DetectSquares() {
        
    }
    
    void add(vector<int> point) 
    {
        cnt_p[point[0]][point[1]]++;
        p_store.push_back({point[0], point[1]});
    }
    
    int count(vector<int> point) 
    {
        int ans = 0;
        int x1 = point[0], y1 = point[1];
        
        for(auto& i : p_store)
        {
            if(abs(x1-i.first)==0 || abs(x1-i.first)!=abs(y1-i.second))
                continue;
            
            ans += (cnt_p[x1][i.second] * cnt_p[i.first][y1]);
        }
        
        return ans;
    }
};

/**
 * Your DetectSquares object will be instantiated and called as such:
 * DetectSquares* obj = new DetectSquares();
 * obj->add(point);
 * int param_2 = obj->count(point);
 */
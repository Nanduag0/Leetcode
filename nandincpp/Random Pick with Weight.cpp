class Solution {
    vector<int> sum;
public:
    Solution(vector<int>& w) 
    {
       // sum.resize(w.size());
        int tot = 0;
        
        for(auto i : w)
        {
            tot += i;
            sum.push_back(tot);
        }
    }
    
    int pickIndex() 
    {
        int rand_index = rand() % sum.back();
        auto it = upper_bound(sum.begin(), sum.end(), rand_index);
        return it-sum.begin();
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
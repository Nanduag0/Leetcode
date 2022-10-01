class RangeFreqQuery {
    unordered_map<int, vector<int>> m;
public:
    RangeFreqQuery(vector<int>& a) 
    {
        for(int i=0;i<a.size();i++)
            m[a[i]].push_back(i);
    }
    
    int query(int left, int right, int value) 
    {
        return upper_bound(m[value].begin(), m[value].end(), right) - lower_bound(m[value].begin(), m[value].end(), left);
    }
};

/**
 * Your RangeFreqQuery object will be instantiated and called as such:
 * RangeFreqQuery* obj = new RangeFreqQuery(arr);
 * int param_1 = obj->query(left,right,value);
 */
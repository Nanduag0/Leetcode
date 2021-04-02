class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) 
    {
        unordered_map<int,int> m;
        
        m[pow(p1[0] - p2[0], 2) + pow(p1[1] - p2[1], 2)]++;
        m[pow(p1[0] - p3[0], 2) + pow(p1[1] - p3[1], 2)]++;
        m[pow(p1[0] - p4[0], 2) + pow(p1[1] - p4[1], 2)]++;
        m[pow(p2[0] - p3[0], 2) + pow(p2[1] - p3[1], 2)]++;
        m[pow(p2[0] - p4[0], 2) + pow(p2[1] - p4[1], 2)]++;
        m[pow(p3[0] - p4[0], 2) + pow(p3[1] - p4[1], 2)]++;
        
        if(m.size() != 2|| m.count(0))
            return 0;
        
        return 1;
    }
};
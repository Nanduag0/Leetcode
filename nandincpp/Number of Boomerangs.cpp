class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int res = 0;
        for (int i = 0; i < points.size(); ++i)
        {
            unordered_map<int, int> distFreq;
            for (int j = 0; j < points.size(); ++j)
            {
                if (i != j)
                {
                    int dist = pow(points[i][0] - points[j][0], 2) + pow(points[i][1] - points[j][1], 2);
                    ++distFreq[dist];
                }
            }
            
            for (auto& pair : distFreq)
            {
                res += pair.second * (pair.second - 1);
            }
        }
        
        return res;
    }
};
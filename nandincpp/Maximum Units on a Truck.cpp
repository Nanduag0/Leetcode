class Solution {
public:
    int maximumUnits(vector<vector<int>>& box, int tsize)
    {
        sort(box.begin(), box.end(), [&](auto x, auto y)
             {
                 return x[1] > y[1];
             });
        
        int t = 0;
        int i, ans = 0;
 
        for(auto& e: box)
        {
            if(tsize < 0) 
                break;
            int num_of_choosing_boxes = min(e[0], tsize);
            ans += num_of_choosing_boxes * e[1];
            tsize -=num_of_choosing_boxes;
        }

        return ans;
    }
};
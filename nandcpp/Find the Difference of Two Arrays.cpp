class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2)
    {
        set<int> one, two;
        set<int> n2;
        for(auto i : nums2)
            n2.insert(i);
        
        for(auto i : nums1)
            if(!n2.count(i))
                one.insert(i);
        
        set<int> n1;
        for(auto i : nums1)
            n1.insert(i);
        
        for(auto i : nums2)
            if(!n1.count(i))
                two.insert(i);
        
        vector<int> oo, tt;
        for(auto i : one)
            oo.push_back(i);
        for(auto i : two)
            tt.push_back(i);
        
        return {oo, tt};
    }
};
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int> v;
        vector<int> :: iterator itr ,ip;
        for(itr=nums1.begin();itr!=nums1.end();itr++)
        {
          v.push_back(*itr);
        }
        for(itr=nums2.begin();itr!=nums2.end();itr++)
        {
            v.push_back(*itr);
        }
        //ip=unique(v.begin(),v.end());
        //v.resize(distance(v.begin(),ip));
        double n;
        sort(v.begin(),v.end());
        if(v.size()&1)
        {
            n=v[v.size()/2.0];
        }
        else
        {
            n=(v[(v.size()/2)]+v[(v.size()/2)-1])/2.0;
        }
        return n;
        
    }
};
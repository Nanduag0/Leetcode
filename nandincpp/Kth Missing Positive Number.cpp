class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) 
    {
         set<int>s;
    vector<int> v;
    
    int mx = *max_element(arr.begin(),arr.end());
    
    for(int num:arr)
       s.insert(num);
     
     for(int i=1;i<=mx+k;i++)
        if(!s.count(i))
          v.push_back(i);

    return v[k-1];
}
    
};
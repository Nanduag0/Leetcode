class Solution {
public:
   vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2)
   {
        unordered_map<int,int>um;
       
        for(int i=0;i<arr2.size();++i)  
            um[arr2[i]]=i;
       
        for(int i:arr1) 
            if(!um.count(i))  
                um[i]=1000+i;
       
        sort(arr1.begin(),arr1.end(),[&](auto a,auto b)
             {
                 return um[a]<um[b];
            });
        return arr1;
    }
};
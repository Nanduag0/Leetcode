class Solution {
public:
    int findSpecialInteger(vector<int>& arr)
    {
        int N=arr.size(),i,n;
        for(i=0; i<N; i++)
            if(arr[i]==arr[i+N/4]){
                n=arr[i];
                break;
                }
        return n;
    }
};
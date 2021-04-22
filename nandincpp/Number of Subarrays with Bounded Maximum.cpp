class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& v, int l, int r) 
    {
        long long i=0,j=0,ans=0,valid=0;
        
        while(j<v.size()){
            if(v[j]<=r && v[j]>=l){
                valid=(j-i+1);
                ans+=(j-i+1);
            }
            else{
                if(v[j]<l){
                    ans+=valid;
                }
                else{
                    i=j+1;
                    valid=0;
                }
            }
            j++;
        }
        return ans;
    }
};
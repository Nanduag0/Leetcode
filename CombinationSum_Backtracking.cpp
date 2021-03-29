class Solution {
  public:
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        // Your code here
        vector<vector<int>> ans;
        int target;
        int i=0;
        vector<int> a;
        vector<int>  :: iterator itr;
        sort(A.begin(),A.end());
        itr=unique(A.begin(),A.end());
        A.resize(std::distance(A.begin(),itr));
        combine(i,B,A,a,ans);
        return ans;
}
void combine(int index,int B,vector<int> &x,vector<int> &a,vector<vector<int>> &ans)
{
    if(B<0)
    {
        return;
        
    }
    if(B==0)
    {
        ans.push_back(a);
        return;
    }
    for(int i=index;i<x.size();i++)
    {
        a.push_back(x[i]);
        combine(i,B-x[i],x,a,ans);
        a.erase(a.end()-1);
        
    }
}
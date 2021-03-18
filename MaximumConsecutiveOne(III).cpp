class Solution {
public:
    int longestOnes(vector<int>& A, int K) 
    {
        if(find(A.begin(),A.end(),1)==A.end())
        {
            return 0;
        }
        int ve=0,vs=0;
        int maxim=INT_MIN,max_count=INT_MIN;
        unordered_map<int,int> mp;
        int count=0;
        while(ve<A.size())
        {
            if(A[ve]==0)
            {
                count++;
            }
            while(count>K)
            {
                if(A[vs]==0)
                {
                    count--;
                }
                vs++;
            }
            max_count=max(max_count,ve-vs+1);
            ve++;
        }
        return max_count;
    }
};
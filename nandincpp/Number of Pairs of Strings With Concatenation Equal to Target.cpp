class Solution {
    int cnt = 0;
    
//     void fun()
//     {
//         string now = a[i];
//         for()
//     }
public:
    int numOfPairs(vector<string>& a, string target) 
    {
        int n = a.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j && a[i]+a[j]==target)
                    cnt++;
            }
        }
        
        return cnt;
    }
};
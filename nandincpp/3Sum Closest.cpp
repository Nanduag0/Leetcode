class Solution {
public:
    int threeSumClosest(vector<int>& a, int target)
    {
        sort(a.begin(), a.end());
        int n = a.size();
        int diff = INT_MAX;
        
        for(int i=0;i<n && diff!=0;i++)
        {
            // if(diff == 0)
            //     break;
            int j = i+1, k = n-1;
            while(j < k)
            {
                int sum = a[i]+a[j]+a[k];
                
                if(abs(target-sum) < abs(diff))
                {
                    diff = (target-sum);
                }
                
                if(sum < target)
                    j++;
                else
                    k--;
            }
        }
        
        return target - diff;
    }
};
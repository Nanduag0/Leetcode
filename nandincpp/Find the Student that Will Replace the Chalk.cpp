class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) 
    {
        long long sum = 0;
        int n = chalk.size();
        
        for(int i=0;i<n;i++)
            sum += (long long)chalk[i];
        
        int left = k%sum;
        
        int i;
        for(i=0;i<n;i++)
        {
            if(chalk[i] > left)
                break;
            
            else
                left -= chalk[i];
        }
        
        return i;
    }
};
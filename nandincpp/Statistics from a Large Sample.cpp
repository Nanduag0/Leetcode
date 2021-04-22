class Solution {
public:
    vector<double> sampleStats(vector<int>& count) {
        vector<double> res{INT_MAX, -1, 0, -1, -1};
        int num = 0, half = 0;
        
        for (int i = 0; i < count.size(); ++i)
        {
            if (count[i] > 0)
            {
                res[0] = res[0] < i ? res[0] : i; // min element
                res[1] = res[1] > i ? res[1] : i; // max element
                res[2] = (res[2] * num + (double)count[i] * i) / (num + count[i]);
                num += count[i]; // to calculate median
            }
            
            if (res[4] < 0 || count[i] > count[res[4]])
            {
                res[4] = i; // mode
            }
        }
        
        for (int i = 0; i < count.size(); ++i)
        {
            half += count[i];
            if (num % 2 == 1 && half > num / 2)
            {
                res[3] = i; // odd length
                break;
            }
            
            if (num % 2 == 0 && half == num / 2 && res[3] < 0)
            {
                res[3] = i;
            }
            else if (num % 2 == 0 && half > num / 2) // even length
            {
                res[3] = res[3] < 0 ? i : (res[3] + i) / 2.0;
                break;
            }
        }
        
        return res;
    }
};
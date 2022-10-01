class Solution {
public:
    int convertTime(string current, string correct) 
    {
        int hr_l = (current[0]-'0')*10 + (current[1]-'0');
        int min_l = (current[3]-'0')*10 + (current[4]-'0');
        int hr_r = (correct[0]-'0')*10 +  (correct[1]-'0');
        int min_r = (correct[3]-'0')*10 +  (correct[4]-'0');
        
        int time_l = hr_l*60 + min_l;
        int time_r = hr_r*60 + min_r;
        int diff = time_r - time_l;
        
        int ans = 0, a[4] = {60, 15, 5, 1};
        for(int i : a)
        {
            ans += diff / i;
            diff = diff % i;
        }
        
        return ans;
    }
};
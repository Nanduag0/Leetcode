class Solution {
public:
     int monotoneIncreasingDigits(int N) {
        string ans = to_string(N);
        int len = ans.length(), idx = len;
        for(int i = len - 2; i >= 0; i--){
            if(ans[i] > ans[i+1]){
                idx = i + 1;
                ans[i]--;
            }
        }
        for(int i = idx; i < len; i++)
            ans[i] = '9';
        return stoi(ans);
    }
};
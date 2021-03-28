class Solution {
public:
    int secondHighest(string s) {
        int digits[10] = {0};
        for(char c : s) {
            if(isdigit(c)) {
                digits[c-'0'] = 1;
            }
        }
        int counter = 0;
        for(size_t i = 10; i > 0; --i) {
            counter += digits[i-1];
            if(counter == 2) {
                return i-1;
            }
        }
        return -1;
    }
};
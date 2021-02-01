class Solution {
public:
    int dayOfYear(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));
        
        vector<int> map = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        if(month > 2 && year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) day++;
        
        for(int i = 1; i < month; i++){
            day += map[i - 1];
        }
        return day;
    }
};


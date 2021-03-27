class Solution {
public:
    bool checkOnesSegment(const string& s) {
        bool zero=false;
        for(auto i:s) {
            if(i=='0') zero=true;
            else if(zero) return false;
        }
        return true;
    }
};
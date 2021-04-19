class Solution {
public:
    int countSegments(string s) 
    {
        stringstream ss(s);
        string word;
        
        int cnt = 0;
        while(ss >> word)
            cnt++;
        
        return cnt;
    }
};
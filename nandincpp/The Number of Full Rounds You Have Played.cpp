class Solution {
    public:
        int numberOfRounds(string s, string f) {
            
		int startT = 60 * stoi(s.substr(0,2)) + stoi(s.substr(3));
		int finishT = 60 * stoi(f.substr(0,2)) + stoi(f.substr(3));

		if (startT > finishT)
			finishT += 24 * 60;

		return max(0, (finishT / 15) - (startT + 14) / 15);
            
        }
};
class Solution {
public:
    string reverseOnlyLetters(string s) {
        stack<char> a;
        for(int i = 0; i < s.length(); i++)
        {
            if(isalpha(s[i]))
                a.push(s[i]);
        }
        int i = 0;
        while((a.empty() == false) && (i < s.length()))
        {
            if(isalpha(s[i]))
            {
                s[i] = a.top();
                a.pop();
            }
            i++;
        }
        return s;
    }
};
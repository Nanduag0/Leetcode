class Solution {
public:
    bool isVowel(char c)
    {
         if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            return true;
         if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' )
             return true;
        return false;
    }
    
    string reverseVowels(string s)
    {
        stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            if(isVowel(s[i])){
                st.push(s[i]);
            }
        }
        for(int i=0;i<s.length();i++)
        {
             if(isVowel(s[i])){
                s[i]=st.top();
                st.pop();
            }
        }
        return s;
    }
};
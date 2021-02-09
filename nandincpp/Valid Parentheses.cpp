class Solution {
public:
    bool isValid(string s) {
        stack <char> ans; 
        for(int i=0;i<s.length();i++) {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                ans.push(s[i]);
            else if(s[i]==')' && ans.size()>0 && ans.top()=='(') {
                ans.pop();
            }
            else if(s[i]=='}' && ans.size()>0 && ans.top()=='{') {
                ans.pop();
            }
            else if(s[i]==']' && ans.size()>0 && ans.top()=='[') {
                ans.pop();
            }
            else
                return false;
        }
        return ans.size()==0?true:false;
    }
};
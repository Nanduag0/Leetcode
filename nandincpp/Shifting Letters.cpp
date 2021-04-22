#define ll long long
class Solution {
public:
    string shiftingLetters(string S, vector<int>& shifts) {
        ll i,ch,prev;
        
        for(i=shifts.size()-1;i>=0;i--)
        {
            if(i==shifts.size()-1)
            {
                prev = shifts[i];
            }
            else
            {
                prev += shifts[i];
            }
            
            ch = ( (S[i]-'a') + prev )%26;
            S[i] = ch+'a';
        }
        return S;
    }
};
class Solution {
public:
string addBinary(string a, string b) 
{

    int i = a.length()-1, j = b.length()-1;
    int carry = 0;
    string ans="";
    
    while(i>=0 || j>=0)
    {
        int temp = 0;
        if(i>=0)
            temp+=a[i--]-'0';
        if(j>=0)
            temp+=b[j--]-'0';
        temp+=carry;
        ans+=temp%2+'0';
        carry = temp/2;
    }
    if(carry == 1)
        ans+='1';
    reverse(ans.begin(), ans.end());
    return ans;
}
};
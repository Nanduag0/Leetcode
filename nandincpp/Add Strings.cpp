class Solution {
public:
    string addStrings(string num1, string num2) 
    {
    int sum = 0, i = num1.length() - 1, j = num2.length() - 1;
    int l = (i >= j) ? i : j;
        
    string str;
    str.resize(l+1);
        
    int k = l;
    while (i >= 0 || j >= 0) 
    {
        if (i >= 0) 
            sum += (num1[i] - '0');
        if (j >= 0) 
            sum += (num2[j] - '0');
        
        str[k] = (sum % 10) + '0';
        sum /= 10;
        i--, j--, k--;
    }
        
    if(sum)
        str.insert(0, "1");
    
    return str;
}
};
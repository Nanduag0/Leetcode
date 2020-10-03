bool comparator(int a, int b)
    {
        string s1 = to_string(a);
        string s2 = to_string(b);
        
        return( s1+s2 > s2+s1 );
    }

class Solution {
public:
    
    
    string largestNumber(vector<int>& ar)
    {
        
        sort(ar.begin(),ar.end(),comparator);
        
        bool flag = 0;
        
        for(int i=0;i<ar.size();i++)
        {
            if(ar[i] != 0)
            {
                flag = 1;
                break;
            }
        }
        
        if(flag)
        {
            string ans = "";
            for(int i=0;i<ar.size();i++)
            {
                ans += to_string(ar[i]);
            }
            return ans;
        }
        
        else
        {
            return "0";
        } 
    }
};
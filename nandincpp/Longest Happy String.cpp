class Solution {
public:
    string longestDiverseString(int a, int b, int c)
    {
        string ans = "";
        int l_a, l_b, l_c;
        l_a = l_b = l_c = 0;
        
        int sizee = a + b + c;
        
        while(sizee--)
        {
            if( (a>=b && a>=c && l_a!=2) || (a>0 && (l_b==2 || l_c==2)) )
            {
                ans += 'a';
                a--;
                l_a++;
                
                l_b = l_c = 0;
            }
            
            else if( (b>=a && b>=c && l_b!=2) || (b>0 && (l_c==2 || l_a==2)) )
            {
                ans += 'b';
                b--;
                l_b++;
                
                l_a = l_c = 0;
            }
            
            else if( (c>=b && c>=a && l_c!=2) || (c>0 && (l_b==2 || l_a==2)) )
            {
                ans += 'c';
                c--;
                l_c++;
                
                l_a = l_b = 0;
            }
        }
        
        return ans;
    }
};
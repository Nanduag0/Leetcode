class Solution {
    int x = 1;
public:
    vector<vector<int>> generateMatrix(int n)
    {
        int T,B,L,R,dir;
        vector<vector<int>> ans(n, vector<int> (n, 0));
        
        T = 0;
        B = n-1;
        L = 0;
        R = n-1;
        dir = 0;
        int i;

        while(T<=B && L<=R)
        {
            if(dir==0)
            {
                for(i=L;i<=R;i++)
                {
                    ans[T][i] = x;
                    x++;
                }
                T++;
            }
            else if(dir==1)
            {
                for(i=T;i<=B;i++)
                {
                    ans[i][R] = x;
                    x++;
                }
                R--;
            }
            else if(dir==2)
            {
                for(i=R;i>=L;i--)
                {
                    ans[B][i] = x;
                    x++;
                }
                B--;
            }
            else if(dir==3)
            {
                for(i=B;i>=T;i--)
                {
                    ans[i][L] = x;
                    x++;
                }
                L++;
            }
            dir=(dir+1)%4;
        }
        return ans;
    }
};
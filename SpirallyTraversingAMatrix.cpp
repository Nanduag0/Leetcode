class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        vector<int> vac ;
        int m=0,n=matrix.size()-1;// k m 
        int p=0,q=matrix[0].size()-1;// l n 
        int direc=0;
        while(m<=n && p<=q)
        {
            if(direc==0)
            {
              for(int i=p;i<=q;i++)
            {
                vac.push_back(matrix[m][i]);
            }
            m++;
            }
            if(direc==1)
            {
               for(int i=m;i<=n;i++)
            {
                vac.push_back(matrix[i][q]);
            }
             q--;
            }
            if(direc==2)
            {
                 for(int i=q;i>=p;i--)
                {
                    vac.push_back(matrix[n][i]);
                }
             n--;  
            }
           if(direc==3)
           {
               for(int i=n;i>=m;i--)
                {
                  vac.push_back(matrix[i][p]);  
                }  
               p++;
           }
            direc=(direc+1)%4;
        }
        return vac;
        
       
    }
};
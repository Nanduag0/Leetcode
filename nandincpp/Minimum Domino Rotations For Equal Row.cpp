class Solution {
    int n;
    int fun(vector<int>& tops, vector<int>& bottoms, int x)
    {
        int op1 = 0, op2 = 0;
        for(int i=0;i<n;i++)
        {
            if(tops[i]!=x && bottoms[i]!=x)
                return -1;
            
            if(tops[i] != x)
                op1++;
            if(bottoms[i] != x)
                op2++;
            
        }
        
        return min(op1, op2);
    }
    
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms)
    {
       n =  bottoms.size();
       int op1 = fun(tops, bottoms, tops[0]);
       int op2 = fun(tops, bottoms, bottoms[0]);
        
       if(op1>0 && op2>0)
           return min(op1, op2);
        return (op1>0) ? op1 : op2;
    }
};
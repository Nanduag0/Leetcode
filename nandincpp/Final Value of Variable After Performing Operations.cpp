class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) 
    {
        int x = 0;
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i][0]=='+' || operations[i][2]=='+')
                x++;
            else if(operations[i][0]=='-' || operations[i][2]=='-')
                x--;
        }
        
        return x;
    }
};
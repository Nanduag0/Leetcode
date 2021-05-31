class Solution {
public:
    int clumsy(int N) {
        int res = 0, cur = 0, index = -1; 
        while (N > 0) {
            switch (++index % 4) {
                case 0:            
                    cur = index == 0 ? N : -N;  
                    break;
                case 1:
                    cur *= N;                    
                    break;
                case 2:
                    cur /= N;                     
                    break;
                case 3:
                    res += cur + N; 
                    cur = 0;                     
                    break;
                //default:                    
            }
            N--; 
        }
        return res + cur; 
    }
};
class NumMatrix {
public:

    int pre[201][201];
    NumMatrix(vector<vector<int>>& matrix) {
        
        int m = matrix.size();
        int n = matrix[0].size();

        for(int i=0; i<=m; i++){
            
            for(int j=0; j<= n; j++){
                if(i == 0 || j==0){
                    pre[i][j] = 0;
                    continue;
                }
                
                pre[i][j] = matrix[i-1][j-1] + pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1];
            }
        }
        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        
        
        return pre[row2+1][col2+1] - pre[row1][col2+1] - pre[row2+1][col1] + pre[row1][col1];
    }
};
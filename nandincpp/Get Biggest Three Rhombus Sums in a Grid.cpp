class Solution {
public:
    int a[4] = {1,1,-1,-1};
    int b[4] = {-1,1,1,-1};
    int n,m;
    
    int getSum(vector<vector<int>>&arr,int i, int j, int len){
        int sum = 0;
        for(int Case = 0; Case < 4; ++Case){
            for(int count = 0; count <= len ; i += a[Case] , j += b[Case]){
                sum += arr[i][j];
                ++count;
            }
        }
        return sum;
    }
    
    vector<int> getBiggestThree(vector<vector<int>>& grid) {
        
        n = grid.size();
        m = grid[0].size();
        set<int, greater<int>>us;
        
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                
                int limit = min((n - i - 1) / 2 , min( j , (m - j - 1) ));
                us.insert(grid[i][j]);
            
                for(int count = 0; count < limit ; ++count)
                    us.insert(getSum(grid,i,j,count));
            }
        }
        vector<int>ans;
        if(us.size() < 3){
            for(int x:us)
                ans.push_back(x);
        }
        else{
            auto it = us.begin();
            for(int i = 0; i<3; ++i, ++it)
                ans.push_back(*it);
        }
        return ans;
    }
};
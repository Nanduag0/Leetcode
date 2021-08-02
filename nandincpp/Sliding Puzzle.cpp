class Solution {
public:
    int slidingPuzzle(vector<vector<int>>& board) 
    {
        string end = "123450";
        vector<vector<int>> moves = {{1,3},{0,2,4},{1,5},{0,4},{1,3,5},{2,4}};
        
        string begin = "";
        for(int i=0;i<board.size();i++)
            for(int j=0;j<board[0].size();j++)
                begin += to_string(board[i][j]);
        
        queue<pair<string, int>> q;
        q.push({begin, 0});
        set<string> vis;
        vis.insert(begin);
        
        while(!q.empty())
        {
            auto p = q.front();
            q.pop();
            string curr = p.first;
            int dist = p.second;
            
            if(curr == end)
                return dist;
            
            int index = curr.find('0');
            for(auto i : moves[index])
            {
                string temp = curr;
                swap(temp[i], temp[index]);
                
                if(!vis.count(temp))
                {
                    vis.insert(temp);
                    q.push({temp, dist+1});
                }
            }
        }
        
        return -1;
    }
};
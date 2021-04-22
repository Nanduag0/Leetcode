class Solution {
    
    bool fun(vector<vector<char>>& board, int i, int j, string &word, int pos)
    {
        if(pos == word.size())
            return 1;
        if(i<0 || j<0 || i>board.size()-1 || j>board[0].size()-1)
            return 0;
        if(word[pos] != board[i][j])
            return 0;
        
        char temp = board[i][j];
        board[i][j] = '_';
        
        if(fun(board, i+1, j, word, pos+1) || fun(board, i-1, j, word, pos+1) || fun(board, i, j-1, word, pos+1) || fun(board, i, j+1, word, pos+1))
            return 1;
        
        board[i][j] = temp;
        return 0;
    }
    
public:
    bool exist(vector<vector<char>>& board, string word)
    {
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(word[0]==board[i][j] && fun(board, i, j, word, 0))
                    return 1;
            }
        }
        return 0;
    }
};
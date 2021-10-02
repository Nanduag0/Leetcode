class Solution {
public:
    class Trie{
        public:
          Trie* next[26]={0};
          string word;
    };
    
    Trie* root;
    
    void insert(string word){
        Trie* it = root;
        
        for(auto x: word){
            if(it->next[x-'a']== NULL){
                Trie* temp = new Trie();
                it->next[x-'a'] = temp;
            }
            it = it->next[x-'a'];
        }
        it->word = word;
    }
    
    void dfs(vector<vector<char>>& board, int i, int j, Trie* p, vector<string> &ans){
        char c = board[i][j];
        
        if( c== '$' || !p->next[c-'a']) return;
        p = p->next[c-'a'];
        
        if(p->word.size()>0){
            ans.push_back(p->word);
            p->word="";
        }
        board[i][j] = '$';
        if(i>0) dfs(board, i-1,j, p,ans);
        if(j>0) dfs(board, i, j-1,p,ans);
        if(i<board.size()-1) dfs(board, i+1,j,p,ans);
        if(j<board[0].size()-1) dfs(board, i, j+1, p, ans);
        
        board[i][j] = c;
        }
    
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        root = new Trie();
        
        for(auto x: words){
            insert(x);
        }
        
        vector<string> ans;
        
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                dfs(board, i, j, root, ans);
            }
        }
        return ans;
    }
};

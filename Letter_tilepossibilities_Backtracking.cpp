class Solution {
     vector<string> ss;
public:
    int numTilePossibilities(string tiles)
    {
        vector<bool> visited(tiles.size());
        unordered_set<string> un;
        visited={false};
        string a;
        backtrack(a,tiles,visited,un);
        return un.size();
        
    }
    void backtrack(string &a,string &tiles,vector<bool> &visited,unordered_set<string> &un)
    {
        for(int i=0;i<tiles.length();i++)
        {
            if(visited[i]==false)
            {
                a.push_back(tiles[i]);
                visited[i]=true;
                un.insert(a);
                backtrack(a,tiles,visited,un);
                a.pop_back();
                visited[i]=false;
                
            }
        }
    }
    
   
};
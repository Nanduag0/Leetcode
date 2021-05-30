class Solution {
 vector<vector<int>> result;
    
 void helper(vector<vector<int>>& graph, vector<int> temp, int src, int dst)
 {
    temp.push_back(src);
    if(src == dst)
    {
        result.push_back(temp);
        return;
    }

    for(auto i : graph[src])
        helper(graph, temp, i, dst);
}
    
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) 
    {
    vector<vector<int>> paths; 
    vector<int> temp;
    int n = graph.size();
        
    if(n == 0)
        return {};
        
    helper(graph, temp, 0, n - 1);
    return result;
}
};
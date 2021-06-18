class Solution {
public:
   int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
	vector<vector<int>> adj(n);
	vector<bool> vis(n);
	for (auto &e : edges) {
		adj[e[0]].push_back(e[1]);
		adj[e[1]].push_back(e[0]);
	}
	return max(0, dfs(0, adj, vis, hasApple) - 2);
}


int dfs(int node, vector<vector<int>> &adj, vector<bool> &vis, vector<bool> &hasApple, int below = 0) {
	vis[node] = true;
	for (int nxt : adj[node]) 
		if (!vis[nxt]) 
			below += dfs(nxt, adj, vis, hasApple);  
	return hasApple[node] || below > 0 ? below + 2 : 0;
}
};
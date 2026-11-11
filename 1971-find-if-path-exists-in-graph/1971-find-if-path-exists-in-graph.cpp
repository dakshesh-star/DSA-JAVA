class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        vector<vector<int>> adj(n);
        vector<bool> visited(n, false);

        // Build adjacency list
        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        // DFS
        function<bool(int)> dfs = [&](int node) {
            if (node == destination) {
                return true;
            }

            visited[node] = true;

            for (int neighbor : adj[node]) {
                if (!visited[neighbor]) {
                    if (dfs(neighbor)) {
                        return true;
                    }
                }
            }

            return false;
        };

        return dfs(source);
    }
};
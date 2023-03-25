class Solution {
public:
    void dfs(int n, vector<int>& visited, vector<vector<int>>& adj, int gh){
        visited[gh]=1;
        for(auto jk : adj[gh]){
            if(!visited[jk]){
                dfs(n,visited,adj,jk);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        vector<vector<int>> adj(n);
        for(auto connection : connections){
            adj[connection[0]].push_back(connection[1]);
            adj[connection[1]].push_back(connection[0]);
        }
        int m = connections.size();
        if(m<(n-1)) return -1;
        int numconnected=0;
        vector<int> visited(n,0);
        for(int i=0;i<n;i++){
            if(!visited[i]){
                numconnected++;
                dfs(n,visited,adj,i);
            }
        }
        return numconnected-1;
    }
};
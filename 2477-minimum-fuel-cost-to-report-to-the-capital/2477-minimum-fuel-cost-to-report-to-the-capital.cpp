class Solution {
public:
    long long fuel=0;
    long long dfs(int node, int parent, vector<vector<int>>& adj, int& seats) {
        int representatives=1;
        for(auto& child: adj[node]) {
            if(child != parent){
                representatives+= dfs(child,node,adj,seats);
            }
            else{
                representatives+=0;
            }
        }
        if(node != 0){
            fuel+=ceil((double)representatives/seats);
        }
        return representatives;
    }
    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
        int n = roads.size();
        vector<vector<int>> adj(n+1);
        vector<int> visited(n+1,0);
        for(auto gh : roads) {
            int a = gh[0];
            int b = gh[1];
            adj[a].push_back(b);
            adj[b].push_back(a);
            
        }
        dfs(0,-1,adj,seats);
        return fuel;
        
    }
};
class Solution {
public:
    int sharecommon(vector<int>& a, vector<int>& b){
        return (a[0]==b[0]) || (a[1]==b[1]);
    }
    void dfs(vector<vector<int>>& stones, vector<vector<int>>& adj ,vector<int>& visited, int src){
        visited[src]=1;
        for(auto gh : adj[src]){
            if(visited[gh] ==0){
                dfs(stones,adj,visited,gh);
            }
        }
    }
    int removeStones(vector<vector<int>>& stones) {
     int n = stones.size();
     int connectedcomp=0;   
     vector<vector<int>> adj(n);
     for(int i=0;i<n;i++)
     for(int j=i+1;j<n;j++){
         if(sharecommon(stones[i],stones[j])){
             adj[i].push_back(j);
             adj[j].push_back(i);
         }
     }    
     vector<int> visited(n,0);
     for(int i=0;i<n;i++){
         if(visited[i]==0){
         connectedcomp++;
         dfs(stones,adj,visited,i);
         }     
     }   
      return stones.size()-connectedcomp;  
    }
};
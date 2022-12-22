class Solution {
public:
   bool dfs1(int fg, vector<vector<int>>& adj, vector<int>& color)
   {
   
    for(auto x : adj[fg])
    {
    if(color[x]==color[fg]) return false;
    if(color[x]==-1) {
    color[x]=1-color[fg];
    if(!dfs1(x,adj,color))
    return false; 
    }
    }
    return true;

   }
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<vector<int>> adj(n+1);
        vector<int> color(n+1,-1);
      /*  if(dislikes.size()==0){
            return true;
        }*/
        for(auto gh : dislikes){
        int u = gh[0];
        int v = gh[1];    
        adj[u].push_back(v);
        adj[v].push_back(u);
        

        }
        for(int i=1;i<=n;i++){
        if(color[i]==-1){
         color[i]=0;    
        if(!dfs1(i,adj,color))
        return false;
        } 

        }
        return true;
    }
};
class Solution {
public:
    queue<int> q;
   
    int answer=INT_MAX;
    int bfs(int n, vector<vector<pair<int,int>>>& adj){
             vector<bool> visited(n+1,false);
             q.push(1);
             visited[1]=true;
        while(!q.empty()){
            int node = q.front();
            q.pop();
           // if(node==n) break;
            //answer = min(answer,)
            for(auto jk : adj[node]){
                answer = min(answer,jk.second);
                if(!visited[jk.first]){
                    visited[jk.first]=true;
                    q.push(jk.first);
                }
            }
        }
        return answer;
    }
    int minScore(int n, vector<vector<int>>& roads) {
     //   int n = roads.size();
        vector<vector<pair<int,int>>> adj(n+1);
        for(auto gh : roads){
            adj[gh[0]].push_back({gh[1],gh[2]});
            adj[gh[1]].push_back({gh[0],gh[2]});
        }
       return bfs(n,adj);
    }
};
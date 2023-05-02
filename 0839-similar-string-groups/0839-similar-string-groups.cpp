class Solution {
public:
    bool issimiliar(string a, string b){
       int n = a.size();
       int diff=0; 
       for(int i=0;i<n;i++){
           if(a[i] != b[i]) diff++;
       } 
        if(diff==0 || diff==2) return true;
        return false;
    }
    void dfs(vector<vector<int>>& adj, int start, vector<int>& visited){
        visited[start]=1;
        for(auto gh : adj[start]){
          if(visited[gh]==0){
              dfs(adj,gh,visited);
          }  
        }
    }
    void bfs(vector<vector<int>>& adj, int start, vector<int>& visited){
        queue<int> q;
        q.push(start);
        visited[start]=1;
        while(!q.empty()){
            int gh=q.front();
            q.pop();
            for(auto bn : adj[gh]){
                if(visited[bn]==0){
                    visited[bn]=1;
                    q.push(bn);
                }
            }
        }
    }
    int numSimilarGroups(vector<string>& strs) {
        int n = strs.size();
        vector<vector<int>> jk(n);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(issimiliar(strs[i],strs[j])){
                    jk[i].push_back(j);
                    jk[j].push_back(i);
                }
            }
            
        }
        vector<int> visited(n,0);
        int connectedcompo=0;
        for(int i=0;i<n;i++){
            if(visited[i]==0){
                connectedcompo++;
                bfs(jk,i,visited);
                
            }
        }
        return connectedcompo;
    }
};
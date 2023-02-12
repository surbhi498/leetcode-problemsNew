class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
     vector<vector<pair<int,int>>> adj(n);
     for(auto& redEdge : redEdges){
         adj[redEdge[0]].push_back({redEdge[1],0});
     }
        for(auto& blueEdge : blueEdges){
            adj[blueEdge[0]].push_back({blueEdge[1],1});
        }
        queue<vector<int>> q;
        vector<int> answer(n,-1);
        vector<vector<bool>> visit(n, vector<bool>(2));
        
        q.push({0,0,-1});
        answer[0]=0;
        visit[0][1]=true;
        visit[0][0]= true;
        while(!q.empty()) {
            auto element = q.front();
            int node = element[0];
            int steps = element[1];
            int prevcolor = element[2];
            q.pop();
            for(auto& [neighbor,color] :adj[node]) {
                if(!visit[neighbor][color] && color != prevcolor) {
                    visit[neighbor][color]=true;
                    q.push({neighbor,1+steps, color});
                    if(answer[neighbor]==-1) answer[neighbor] =1+ steps;
                }
            }
        }
        return answer;
    }
};
class Solution {
public:
    void dfs(int i,vector<vector<int>>& adjacency, vector<int>& visited){
        visited[i]=1;
        for(auto gh : adjacency[i]){
            if(!visited[gh] && gh != i)
            dfs(gh,adjacency,visited);
        } 
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<vector<int>> adjacency(n);
        int count=0;
        int connectcompo=0;
        for(auto gh: isConnected){
            int hj = gh.size();
            for(int i=0;i<hj;i++)
            {
            int first1 = gh[i];
            if(first1==1){
            adjacency[count].push_back(i);
            adjacency[i].push_back(count);    
            }  
            }    
            count++;
        }
        vector<int> visited(n,0);
        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(i,adjacency,visited);
                connectcompo++;
            }
            
        }
        return connectcompo;
        
    }
};
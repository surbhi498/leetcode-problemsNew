class Solution {
public:
    
void dfs(int i, vector<int>& visited, vector<vector<int>>& adj,vector<int>& yu)
   {      
        visited[i]=1;
        for(auto gh: adj[i]){
            if(!visited[gh]){
                yu.push_back(gh);
                dfs(gh,visited,adj,yu);
            }
        }
        
    }
    int maximumDetonation(vector<vector<int>>& bombs) {
        int n = bombs.size();
        vector<vector<int>> adj(n);
        //vector<int> visited(n,0);
        vector<int> yu;
        int min1=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j) continue;
                long long x1 = bombs[i][0];
                long long y1 = bombs[i][1];
                long long r1 = bombs[i][2];
                long long x2 = bombs[j][0];
                long long y2 = bombs[j][1];
                long long r2 = bombs[j][2];
                long long g = (x1-x2);
                long long h = (y1-y2);
                double dist = g*g+h*h;
                if(dist<=(r1*r1)){
                    adj[i].push_back(j);
                    //adj[j].push_back(i);
                }
                }
            }
        for(int i=0;i<n;i++){
             vector<int> visited(n,0);
             yu.push_back(i);   
             dfs(i,visited,adj,yu);
             int cv = yu.size(); 
             yu.clear();
             min1=max(min1,cv);  
               
             
            
        }
       return min1;
        
    }
};
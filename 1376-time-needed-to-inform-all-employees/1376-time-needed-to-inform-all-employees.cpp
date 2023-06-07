class Solution {
public:
    int maxTime = INT_MIN;
    void bfs(int i,vector<int>& visited, vector<vector<int>>& mg,vector<int>& informTime, int sum, queue<pair<int,int>>& q){
       visited[i]=1;
        while(!q.empty())
        {
        int fg = q.front().first;
        sum = q.front().second;    
        //sum+=q.front().second; 
        maxTime = max(maxTime,sum);    
        q.pop();
        for(auto jk : mg[fg]){
            if(!visited[jk]){
             visited[jk]=1;    
            q.push({jk,sum+informTime[jk]});
            }    
        }    
        }    
        
    }
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<vector<int>> mg(n);
        vector<int> visited(n,0);
        int sum=0;
        queue<pair<int,int>> q;
        q.push({headID,informTime[headID]});
        for(int i=0;i<n;i++){
            if(manager[i] != -1)
            mg[manager[i]].push_back(i);
        }
        bfs(headID,visited,mg,informTime,sum,q); 
        return maxTime;
    }
};
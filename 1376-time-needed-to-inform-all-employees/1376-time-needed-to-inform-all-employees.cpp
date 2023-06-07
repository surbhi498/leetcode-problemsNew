class Solution {
public:
    int maxTime = INT_MIN;
    void dfs(int i,vector<int>& visited, vector<vector<int>>& mg,vector<int>& informTime, int sum){
       // visited[i]=1;
        sum+=informTime[i];
        maxTime = max(maxTime,sum);
        for(auto gh : mg[i]){
           // if(!visited[gh]){
              
                dfs(gh,visited,mg,informTime,sum);
           // }
        }
        
    }
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<vector<int>> mg(n);
        vector<int> visited(n,0);
        int sum=0;
        for(int i=0;i<n;i++){
            if(manager[i] != -1)
            mg[manager[i]].push_back(i);
        }
        dfs(headID,visited,mg,informTime,sum); 
        return maxTime;
    }
};
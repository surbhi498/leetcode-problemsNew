class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {      int n = routes.size();
       unordered_map<int,unordered_set<int>> adj;
       for(int i=0;i<n;i++){
           for(int j=0;j<routes[i].size();j++){
               adj[routes[i][j]].insert(i);
           }
       }                                                                                  queue<pair<int,int>> q;
       int bustaken=0;
       q.push({source,bustaken});
       unordered_set<int> s;
       s.insert(source);
       while(!q.empty()){
           int currstop=q.front().first;
           int bustaken=q.front().second;
           q.pop();
           if(currstop==target){
               return bustaken;
           }
           for(auto jk : adj[currstop]){
               for(int i=0;i<routes[jk].size();i++){
                   if(s.find(routes[jk][i])==s.end()){
                      q.push({routes[jk][i],bustaken+1});
                   }
               }
              routes[jk].clear();  
           }
          
       }                                                                                  return -1; 
        
    }
};
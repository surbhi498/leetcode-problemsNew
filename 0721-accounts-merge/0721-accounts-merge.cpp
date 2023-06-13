class Solution {
public:
     unordered_map<string,vector<string>> adj;
    unordered_set<string> visited;
    void dfs(vector<string>& mergedaccount, string& email){
        visited.insert(email);
        mergedaccount.push_back(email);
        for(auto neighbor : adj[email]){
            if(visited.find(neighbor)==visited.end()){
                dfs(mergedaccount, neighbor);
            }
        }
    }
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        int n = accounts.size();
       vector<vector<string>> answer;
        // creating adjacency list
        for(auto gh : accounts){
            vector<string> xc = gh;
            int bn = gh.size();
            string accfirstname = xc[1];
            for(int i=2;i<bn;i++){
                adj[accfirstname].push_back(gh[i]);
                adj[gh[i]].push_back(accfirstname);
            }
        }
        vector<vector<string>> mergedacc;
        for(auto op : accounts){
            vector<string> xc = op;
            string accname = xc[0];
            string accfirstname = xc[1];
            if(visited.find(accfirstname)==visited.end()){
                vector<string> mergedaccount;
                mergedaccount.push_back(accname);
                dfs(mergedaccount,accfirstname);
                sort(mergedaccount.begin()+1,mergedaccount.end());
                answer.push_back(mergedaccount);
            }
        }
        return answer;
    }
};
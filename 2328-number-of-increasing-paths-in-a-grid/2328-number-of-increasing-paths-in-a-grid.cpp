class Solution {
public:
    int dx[4]={+1,0,-1,0};
    int dy[4]={0,+1,0,-1};
    int mod = 1e9+7;
    int countPaths(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
       // sort(grid.begin(),grid.end());
        vector<pair<int, pair<int, int>>> cells;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cells.push_back({grid[i][j], {i, j}});
            }
        }

        // Sort the cells based on their values
        sort(cells.begin(), cells.end());

        vector<vector<int>> dp(n,vector<int>(m,1));
                for(int k=0;k<cells.size();k++){
                    int i= cells[k].second.first;
                    int j = cells[k].second.second;
                for(int t=0;t<4;t++){
                    int currx = i+dx[t];
                    int curry = j+dy[t];
                    if(0<=currx && currx<n && curry>=0 && curry<m){
                        if(grid[currx][curry]>cells[k].first){
                            dp[currx][curry]+=dp[i][j];
                            dp[currx][curry]%=mod;
                        }
                    }
                }
            }    
        int answer=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                answer+=dp[i][j];
                answer%=mod;
            }
        }
        return answer;
    }
};
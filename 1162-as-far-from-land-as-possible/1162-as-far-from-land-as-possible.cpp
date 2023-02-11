class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        int dx[4] = {0,-1,1,0};
        int dy[4] = {1,0,0,-1};
        queue<pair<int,int>> pq;
        for(int i=0;i<grid.size();i++)
        for(int j=0;j<grid[0].size();j++) {
            visited[i][j]=grid[i][j];
            if(grid[i][j])
            pq.push({i,j});
            
        }   
        int distance=-1;
        while(!pq.empty())
        {
        int fg = pq.size();
        while(fg--) {
            pair<int,int> op = pq.front();
            pq.pop();
            for(int i=0;i<4;i++){
                int x = op.first + dx[i];
                int y = op.second + dy[i];
                
                if(x>=0 && y>=0 && x<grid.size() && y<grid[0].size() && visited[x][y]==0){
                    visited[x][y]=1;
                    pq.push({x,y});
                    
                }
                }
            }
              distance++;
            }
            
          return distance==0?-1:distance;  
        }
};
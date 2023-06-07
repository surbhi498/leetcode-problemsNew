class Solution {
public:
    
    vector<vector<int>> jk{{1,1},{0,1},{-1,1},{-1,0},{-1,-1},{0,-1},{1,-1},{1,0}};
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int,int>> q;
        int count=0;
        if(grid[0][0] != 0 || grid[n-1][m-1] != 0) return -1;
        q.push({0,0});
        grid[0][0]=1;
        while(!q.empty())
        {
            pair<int,int> gh = q.front();
            int first1 = gh.first;
            int second1 = gh.second;
            int distance = grid[first1][second1];
            if(first1==(n-1) && second1==(m-1)) return distance;
            q.pop();
            for(int i=0;i<jk.size();i++){
                    int newrow = first1+jk[i][0];
                    int newcol = second1 + jk[i][1];
                    if((newrow>=0 && newrow<n && newcol>=0 && newcol<m) && grid[newrow][newcol]==0)
                    {
                        grid[newrow][newcol]=1;
                        q.push({newrow,newcol});
                        grid[newrow][newcol]=distance+1;
                    }    
            }
            
         }    
        return -1;
    }
};
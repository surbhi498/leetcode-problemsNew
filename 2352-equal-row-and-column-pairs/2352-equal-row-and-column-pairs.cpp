class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> rows;
        vector<int> cols;
        map<int,int> mp;
        int count=0;
        vector<pair<int,int>> pi;
        for(int i=0;i<n;i++)
        {
        int sum=0;    
        for(int j=0;j<n;j++)
        {
           sum+=grid[i][j];        
        }
       // cout<<sum<<endl;    
        rows.push_back(sum); 
       // cout<<rows[i]<<endl;    
        }
        for(int i=0;i<n;i++)
        {
        int sum1=0;    
        for(int j=0;j<n;j++)
        {
           sum1+=grid[j][i];        
        }
        cols.push_back(sum1);    
        }
       
        for(int col1=0;col1<n;col1++){
        for(int row1=0;row1<n;row1++)
        {   if(cols[col1]==rows[row1]) 
            pi.push_back({row1,col1});
        }
        }
        
        for(int y=0;y<pi.size();y++){
        
            pair<int,int> nm = pi[y];
            int flag=1;
            int fii = nm.first;
            int sii = nm.second;
            for(int bn =0;bn<n;bn++){
                if(grid[fii][bn] != grid[bn][sii]){
                flag=0;
                break;    
                }
            }
            if(flag==1)
            count++;    
        }
        return count;
    }
};
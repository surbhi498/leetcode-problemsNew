class Solution {
public:
    long long matrixSumQueries(int n, vector<vector<int>>& queries) {
        int n1 = queries.size();
        
        long long sum=0;
        vector<int> rowindex(n,1);
        vector<int> colindex(n,1);
        long long rowremain=n;
        long long colremain=n;
        for(int i=n1-1;i>=0;i--){
            if(queries[i][0]==0 && rowindex[queries[i][1]]==1){
                sum+=colremain*queries[i][2];
                rowindex[queries[i][1]]=0;
                rowremain--;
                
            }
            if(queries[i][0]==1 && colindex[queries[i][1]]==1){
                sum+=rowremain*queries[i][2];
                colindex[queries[i][1]]=0;
                colremain--;
                
        }
        }     
            return sum;
    }
};
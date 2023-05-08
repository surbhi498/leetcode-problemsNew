class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=mat[i][i];
        }
        for(int j=0;j<n;j++){
            if(j != (n-j-1))
            sum+=mat[j][n-j-1];
            
        }
        return sum;
    }
};
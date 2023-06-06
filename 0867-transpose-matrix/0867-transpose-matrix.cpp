class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> mg;
        if(n != m){
         for(int j=0;j<m;j++){
             vector<int> yu;
             for(int i=0;i<n;i++){
              yu.push_back(matrix[i][j]);   
                 
             }
             mg.push_back(yu);
             
         }   
         return mg;   
        }
        for(int i=0;i<n;i++){
            for(int j=i;j<m;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        return matrix;
    }
};
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> gh;
        int toprow=0;
        int lastrow=n-1;
        int firstcol=0;
        int lastcol = m-1;
        while((toprow<=lastrow) && (firstcol<=lastcol)){
            for(int i=firstcol;i<=lastcol;i++){
                gh.push_back(matrix[toprow][i]);
            }
            toprow++;
            if(toprow>lastrow) break;
            for(int j=toprow;j<=lastrow;j++){
                gh.push_back(matrix[j][lastcol]);
            }
            lastcol--;
            for(int v=lastcol;v>=firstcol;v--){
                gh.push_back(matrix[lastrow][v]);
            }
            
            if(lastcol<firstcol) break;
           lastrow--;
           for(int j=lastrow;j>=toprow;j--){
               gh.push_back(matrix[j][firstcol]);
           } 
           firstcol++; 
            
        }
        return gh;
    }
};
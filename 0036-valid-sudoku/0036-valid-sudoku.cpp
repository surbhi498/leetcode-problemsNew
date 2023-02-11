class Solution {
public:
    bool validthree(vector<vector<char>>& board) {
        int n = board.size();
        map<char,int> mp1;
        for(int i=0;i<n;i=i+3){
            int x = i;
            for(int j=0;j<n;j=j+3) {
                int y=j;
             for(int a=x;a<(x+3);a++){
             for(int b=y;b<(y+3);b++){
                 if(board[a][b] != '.'){
                 if(mp1.count(board[a][b])==0)
                     mp1[board[a][b]]++;
                 else
                     return false;
             }
             }    
             }    
             mp1.clear();   
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        map<char,int> mp;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j] != '.'){
                if(mp.count(board[i][j])==0)
                  mp[board[i][j]]=1;
                else
                   return false;   
            }
            }    
            mp.clear();
        }
        for(int j=0;j<n;j++){
            for(int i=0;i<n;i++){
                if(board[i][j] != '.'){
                if(mp.count(board[i][j])==0)
                    mp[board[i][j]]=1;
                else
                    return false;
            }
            }    
            mp.clear();
           
        }
        return validthree(board);
    }
};
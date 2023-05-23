class Solution {
public:
    bool checkPartitioning(string s) {
         int n = s.size();
        vector<vector<string>>result;
        vector<string> currentlist;
        vector<vector<int>> dp(n,vector<int>(n,0));
        vector<int> cut(n,-1);
      //  int count=0;
         for(int end=0;end<s.size();end++){
          //  count = 0;
            for(int start=0;start<=end;start++) {
            if(s[start]==s[end] && (end-start<=2 || dp[start+1][end-1])){
                dp[start][end]=1;
              //  count++;
                
               }
            
            }
           // cut[end]=count;
         }  
           for(int i=1;i<n-1;i++) {
           for(int j=i;j<n-1;j++){
               if(dp[0][i-1] && dp[i][j] && dp[j+1][n-1]){
                   return true;
           }
           } 
           }    
            return false; 
    }
};
class Solution {
public:
 
    int minCut(string s) {
         int n = s.size();
        vector<vector<string>>result;
        vector<string> currentlist;
        vector<vector<int>> dp(n,vector<int>(n,0));
        vector<int> cut(n,-1);
         for(int end=0;end<s.size();end++){
            int minimumcut = end;
            for(int start=0;start<=end;start++) {
            if(s[start]==s[end] && (end-start<=2 || dp[start+1][end-1])){
                dp[start][end]=1;
                minimumcut = start==0?0:min(minimumcut,cut[start-1]+1);
               }
            
            } 
           cut[end]=minimumcut; 
        }
        return cut[n-1];
    }
};
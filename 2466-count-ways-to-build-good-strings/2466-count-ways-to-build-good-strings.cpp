const int mod =1e9+7;
class Solution {
public:
    int dfs(int end, int zero, int one, vector<int>& dp)
    {
        if(dp[end] != -1) return dp[end];
        int count=0;
        if(end>=zero)
        count +=dfs(end-zero,zero,one,dp);
        if(end>=one)
        count += dfs(end-one,zero,one,dp);
        return dp[end]=count % mod;
            
}    
    int countGoodStrings(int low, int high, int zero, int one) {
      vector<int> dp(high+1,-1);
      dp[0]=1;
      int answer=0;  
      for(int i=low;i<=high;i++){
          answer+=dfs(i,zero,one, dp);
          answer=answer % mod;
      } 
        return answer;
    }
};
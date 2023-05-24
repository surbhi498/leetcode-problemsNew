class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
      //  vector<vector<long long>> dp(n,vector<long long>(amount+1,-1));
        vector<long long> dp(amount+1,-1);
        // for(long long i=0;i<n;i++){
        //     dp[i][0]=0;
        // }
        dp[0]=0;
        for(int x=1;x<=amount;x++){
            for(int i=0;i<n;i++){
//                 if(coins[i]>x && i>0){
//                     dp[i]=dp[i-1];
                    
//                 }
               if (coins[i] <= x) {
                    if (dp[x - coins[i]] != -1) {
                        if (dp[x] == -1)
                            dp[x] = dp[x - coins[i]] + 1;
                        else
                            dp[x] = min(dp[x], dp[x - coins[i]] + 1);
                    }
                }
                
            }
        }
        return dp[amount];
    }
};
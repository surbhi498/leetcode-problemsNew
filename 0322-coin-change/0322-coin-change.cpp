#include <vector>
#include <climits>
#include <algorithm>

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<long long>> dp(n + 1, vector<long long>(amount + 1, INT_MAX));
        
        // Base case: 0 coins required for amount 0
      //  dp[0][0] = 0;
        for(int i=0;i<n;i++){
            dp[i][0]=0;
        }
        for(int i=1;i<=amount;i++){
            if((i%coins[0])==0)
            {
                dp[0][i]=i/coins[0];
            }      
            
        } 
        for (int i = 1; i<n; i++) {
           // dp[i][0] = 0; // 0 coins required for amount 0
            
            for (int x = 1; x <= amount; x++) {
                if (coins[i] <= x) {
                    // Choose the minimum between:
                    // 1. Using the current coin: 1 + minimum coins required for amount (x - coin value)
                    // 2. Not using the current coin: coins required from the previous row for the same amount
                    dp[i][x] = min(1 + dp[i][x - coins[i]], dp[i - 1][x]);
                }
                else {
                    // If the current coin value is greater than the amount, copy the value from the previous row
                    //if(i>0)
                    dp[i][x] = dp[i - 1][x];
                }
            }
        }

        return (dp[n-1][amount] == INT_MAX) ? -1 : dp[n-1][amount];

    }
};

#include <vector>
#include <climits>
#include <algorithm>

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<long long>> dp(n + 1, vector<long long>(amount + 1, INT_MAX));
        
        // Base case: 0 coins required for amount 0
        dp[0][0] = 0;

        for (int i = 1; i <= n; i++) {
            dp[i][0] = 0; // 0 coins required for amount 0
            
            for (int x = 1; x <= amount; x++) {
                if (coins[i - 1] <= x) {
                    // Choose the minimum between:
                    // 1. Using the current coin: 1 + minimum coins required for amount (x - coin value)
                    // 2. Not using the current coin: coins required from the previous row for the same amount
                    dp[i][x] = min(1 + dp[i][x - coins[i - 1]], dp[i - 1][x]);
                }
                else {
                    // If the current coin value is greater than the amount, copy the value from the previous row
                    dp[i][x] = dp[i - 1][x];
                }
            }
        }

        return (dp[n][amount] == INT_MAX) ? -1 : dp[n][amount];

    }
};

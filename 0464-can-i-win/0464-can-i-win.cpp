class Solution {
public:
    bool canIWin(int maxChoosableInteger, int desiredTotal) {
        if (maxChoosableInteger >= desiredTotal)
            return true;
        
        if (maxChoosableInteger * (maxChoosableInteger + 1) / 2 < desiredTotal)
            return false;
        
        vector<int> dp(1 << maxChoosableInteger, -1);
        return canWin(0, maxChoosableInteger, desiredTotal, dp);
    }
    
    bool canWin(int state, int maxChoosableInteger, int desiredTotal, vector<int>& dp) {
        if (dp[state] != -1)
            return dp[state];
        
        for (int i = 1; i <= maxChoosableInteger; ++i) {
            int mask = 1 << (i - 1);
            
            if ((state & mask) == 0) {
                if (i >= desiredTotal || !canWin(state | mask, maxChoosableInteger, desiredTotal - i, dp)) {
                    dp[state] = 1;
                    return true;
                }
            }
        }
        
        dp[state] = 0;
        return false;
    }
};

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> dp;

    int solve(vector<int>& nums, int prevIndex, int currentIndex, int mask) {
        if (currentIndex == nums.size()) {
            return 1;
        }
        if (dp[prevIndex + 1][mask] != -1) {
            return dp[prevIndex + 1][mask];
        }
        int tot = 0;
        for (int j = 0; j < nums.size(); j++) {
            if (mask & (1 << j)) {
                continue;
            }
            if (prevIndex == -1 || nums[prevIndex] % nums[j] == 0 || nums[j] % nums[prevIndex] == 0) {
                tot += solve(nums, j, currentIndex + 1, mask | (1 << j));
                tot %= 1000000007;
            }
        }
        dp[prevIndex + 1][mask] = tot;
     //   cout << "dp[" << prevIndex + 1 << "][" << mask << "] = " << //dp[prevIndex + 1][mask] << endl;
        return dp[prevIndex + 1][mask];
    }

    int specialPerm(vector<int>& nums) {
        int n = nums.size();
        dp.resize(n+1, vector<int>((1 << (n+1)), -1));
        return solve(nums, -1, 0, 0);
    }
};


class Solution {
public:
    bool PredictTheWinner(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n,vector<int>(n,0));
        for(int i=0;i<n;i++) dp[i][i]=nums[i];
        for(int i=1;i<n;i++){
            for(int j=0;j<n-i;j++){
                int right=j+i;
                dp[j][right]=max((nums[j]-dp[j+1][right]),(nums[right]-dp[j][right-1]));
            }
        }
      
        return dp[0][n-1] >=0;
       // return dp[0][n-1]>=0;
    }
};
class Solution {
public:
    const int m = 1000000007;
    int numTilings(int n) {
        if(n==1) return 1;
        if(n==2) return 2;
        vector<int> dp(n+1,0);
        dp[1]=1;
        dp[2]=2;
        dp[3]=5;
        for(int i=4;i<=n;i++)
        {
        dp[i]= (2*dp[i-1]%m + dp[i-3]%m)%m;

        }
        return dp[n];
    }
};
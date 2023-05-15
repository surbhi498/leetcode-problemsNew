class Solution {
public:
    long long solve1(int i, vector<vector<int>>& questions, int n, vector<long long>& dp)
    {
        if(i>=n) return 0;
        if(dp[i] != -1) return dp[i];
        long long sum = questions[i][0];
        int skip = questions[i][1];
        return dp[i]= max(solve1(i+1,questions,n,dp), sum+solve1(i+skip+1,questions,n,dp));
        
        
        
    }    
    long long mostPoints(vector<vector<int>>& questions) {
        int n = questions.size();
        vector<long long> dp(n,0);
        dp[n-1]=questions[n-1][0];
        for(int i=n-2;i>=0;i--){
            dp[i]=questions[i][0];
            int skip = questions[i][1];
            if((i+skip+1)<n){
                dp[i]+=dp[i+skip+1];
            }
            dp[i]=max(dp[i],dp[i+1]);
        }
        //return solve1(0,questions,n, dp);
        return dp[0];
    }
};
class Solution {
public:
    int solve1(int i, int j, vector<int>& nums1, vector<int>& nums2, vector<vector<int>>& memo)
    {
        if(i<=0 || j<=0){
            return 0;
        }
        if(memo[i][j] != -1){
            return memo[i][j];
        }
        if(nums1[i-1]==nums2[j-1]){
            memo[i][j] = 1 + solve1(i-1,j-1,nums1,nums2,memo);
        }
        else{
            
            memo[i][j]= max(solve1(i,j-1,nums1,nums2,memo),solve1(i-1,j,nums1,nums2,memo));
        }
        return memo[i][j];
    }    
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
      //  vector<vector<int>> memo(n1+1,vector<int>(n2+1,0));
        vector<int> dp(n2+1,0);
        vector<int> dpPrev(n2+1,0);
        for(int i=1;i<=n1;i++){
        for(int j=1;j<=n2;j++){
            if(nums1[i-1]==nums2[j-1]){
                dp[j]=1+dpPrev[j-1];
                //memo[i][j]=1+memo[i-1][j-1];
            }
            else{
               // memo[i][j]=max(memo[i][j-1],memo[i-1][j]);
                dp[j]=max(dp[j-1],dpPrev[j]);
            }
        }
            dpPrev=dp;
        }    
    
    return dp[n2];
    }
};
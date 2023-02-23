class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n= nums.size();
        vector<pair<int,int>> dp(n,{1,1});
      //   dp[0].second=1;
     //   cout<<dp[1].first<<dp[1].second<<endl;
        int ans=0;
        int max1=INT_MIN;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                  //  dp[i].first = max(1+dp[j].first, dp[i].first);
                    if(dp[i].first==(dp[j].first+1)){
                        dp[i].second +=dp[j].second;
                    }
                  else if(dp[i].first<(dp[j].first+1)){
                       // dp[i].second = dp[j].second;
                      dp[i]={1+dp[j].first,dp[j].second};
                    }
                }
            }
          
            }
          for(auto hj : dp){
                int bn = hj.first;
                if(bn>max1){
                    max1=bn;
                }
          }
        for(int i=0;i<n;i++) {
            cout<<dp[i].second<<endl;
        }
        cout<<max1<<endl;
        for(auto kl : dp){
            int ui = kl.first;
            if(ui==max1){
                cout<<ui<<endl;
                cout<<kl.second<<endl;
                ans+=kl.second;
            }
        }
        return ans;
    }
};
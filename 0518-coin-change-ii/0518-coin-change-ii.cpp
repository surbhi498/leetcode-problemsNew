//const int mod = 1e9 + 7;
class Solution {
public:
    long long  count1(int start,vector<int>& arr, int sum, vector<vector<long long>>& dp)
{
    if(start==arr.size()){
    return (sum==0);
    }
    if(dp[start][sum] != -1) return dp[start][sum];     
    int take=0;
    int nottake;
    nottake =  count1(start+1,arr,sum, dp);
    if(arr[start]<=sum){

      take =  count1(start,arr, sum-arr[start], dp);
    }
   
    return dp[start][sum]= (take+nottake);
    
}
    int change(int amount, vector<int>& coins) {
       int n = coins.size();
        vector<vector<long long>> dp(n,vector<long long>(amount+1,0));
        vector<int> prev(amount+1,0);
        vector<int> curr(amount+1,0);
        for(int t=0;t<=amount;t++){
            prev[t]=(t%coins[0]==0);
        }
        for(int start=1;start<n;start++){
            for(int val=0;val<=amount;val++){
                int take=0;
                int nottake;
                nottake =  prev[val];
                if(coins[start]<=val){
                take =  curr[val-coins[start]];
                 }
   
            curr[val]= (take+nottake);
                
    
            }
            prev=curr;
        }
        return prev[amount];
    }
};
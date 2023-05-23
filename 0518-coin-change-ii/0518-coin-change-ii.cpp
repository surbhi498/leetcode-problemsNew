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
        vector<vector<long long>> dp(n+1,vector<long long>(amount+1,-1));
        return count1(0,coins,amount, dp);
    }
};
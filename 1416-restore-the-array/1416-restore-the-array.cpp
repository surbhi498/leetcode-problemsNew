class Solution {
public:
    int mod = 1e9+7;
    int numberOfArrays(string s, int k) {
        int m = s.size();
        vector<int> dp(m+1,0);
        dp[0]=1;
        for(int start=0;start<m;start++){
            if(s[start]=='0'){
                continue;
            }
            long sum=0;
            for(int end=start;end<m;end++){
                sum=sum*10+(s[end]-'0');
                if(sum>k){
                    break;
                }
                dp[end+1]=(dp[end+1]+dp[start])%mod;
            }
          
        }
        return dp[m];
    }
};
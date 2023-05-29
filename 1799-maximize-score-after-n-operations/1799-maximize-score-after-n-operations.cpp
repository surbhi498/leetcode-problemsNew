class Solution {
public:
    
    int check(vector<int>& nums, int mask, vector<int>& memo,int pickedpair, int m){
        if(2*pickedpair==(m)){
            return 0;
        }
        
        if(memo[mask] != -1) return memo[mask];
        int max1=0;
        for(int i=0;i<(nums.size());i++){
            for(int j=i+1;j<(nums.size());j++){
                if(((mask>>i)&1)==1 or ((mask>>j)&1)==1){
                    continue;
                }
               int  maxscore = (pickedpair+1)* __gcd(nums[i],nums[j]);
                int newmask = mask | (1<<i) | (1<<j);
                int remainingscore =   check(nums, newmask, memo, pickedpair+1,m);
                max1 = max(max1, maxscore+remainingscore);
                
              
            }
        }
        memo[mask]=max1;
        return max1;
    }
    int maxScore(vector<int>& nums) {
        int n = nums.size();
        int m = 1<<n;
        vector<int> memo(m,-1);
        int pickedpair=0;
        return check(nums, 0, memo,pickedpair,m);
    }
};
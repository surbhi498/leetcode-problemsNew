class Solution {
public:
    int maxscore(vector<int>& nums, int left, int right, vector<vector<int>>& memo){
        if(memo[left][right] != -1) return memo[left][right];
        if(left==right){
            return nums[left];
        }
        int scoreleft = nums[left]-maxscore(nums,left+1,right,memo);
        int scoreright = nums[right]-maxscore(nums,left,right-1,memo);
        memo[left][right]= max(scoreleft,scoreright);
        return memo[left][right];
    }
    bool PredictTheWinner(vector<int>& nums) {
        int n = nums.size();
        int left=0;
        int right=n-1;
        vector<vector<int>> memo(n,vector<int>(n,-1));
        return maxscore(nums,0,n-1,memo)>=0;
    }
};
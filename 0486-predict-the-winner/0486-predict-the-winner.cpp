class Solution {
public:
    int maxscore(vector<int>& nums, int left, int right){
        if(left==right){
            return nums[left];
        }
        int scoreleft = nums[left]-maxscore(nums,left+1,right);
        int scoreright = nums[right]-maxscore(nums,left,right-1);
        return max(scoreleft,scoreright);
    }
    bool PredictTheWinner(vector<int>& nums) {
        int n = nums.size();
        int left=0;
        int right=n-1;
        return maxscore(nums,0,n-1)>=0;
    }
};
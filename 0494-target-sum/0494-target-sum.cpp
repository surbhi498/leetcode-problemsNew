class Solution {
public:
    int solve(vector<int>& nums, int target, int sum,int ind){
        if(ind==(nums.size())){
            if(target==sum){
                return 1;
            }
            else{
                return 0;
            }
        }
        int plus =0;
        int minus=0;
        plus = solve(nums,target, sum-nums[ind], ind+1);
        minus = solve(nums, target, sum + nums[ind], ind+1);
        return plus+minus;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        // if(target<0){
        //     target = 2*abs(target);
        // }
        return solve(nums, target,0, 0);
    }
    
};
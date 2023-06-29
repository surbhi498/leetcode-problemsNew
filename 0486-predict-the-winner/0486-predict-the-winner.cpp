class Solution {
public:
    bool check(int left, int right, int curr_turn, int p1_score, int p2_score, vector<int>& nums){
        if(left>right) return p1_score>=p2_score;
        int take_left;
        int take_right;
        bool ans;
        if (curr_turn==1){
                take_left = check(left+1,right,2,p1_score+nums[left],p2_score, nums);
                take_right = check(left, right-1,2,p1_score+nums[right], p2_score, nums);
                if(take_left || take_right){
                ans=true;
            }
            else{
                ans=false;
            }
            
        }
        else{
                take_left = check(left+1,right,1,p1_score,p2_score+nums[left], nums);
                take_right = check(left, right-1,1,p1_score, p2_score+nums[right], nums);
                if(take_left && take_right){
                ans=true;
            }
            else{
                ans=false;
            }
            
        }
        return ans;
    }
    bool PredictTheWinner(vector<int>& nums) {
        int n = nums.size();
        int left=0;
        int right=n-1;
        int curr_turn=1;
        int p1_score=0;
        int p2_score=0;
        return check(left,right,curr_turn,p1_score,p2_score, nums);
    }
};
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int min1 = nums[0];
        int i=0;
        for(i=0;i<(n-1);i++){
            if(nums[i+1]<nums[i]){
                break;
            }
        }
        if((i+1)<n)
        min1 = min(min1,nums[i+1]);
        return min1;
    }
};
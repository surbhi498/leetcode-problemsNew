class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int start=0;
        int end = n-1;
        if(n==1) return nums[0];
        if(nums[n-1]>nums[0]) return nums[0];
        while(start<=end){
            int mid = start+(end-start)/2;
            if(nums[mid]>nums[mid+1]){
                return nums[mid+1];
            }
            if(nums[mid]<nums[mid-1]) return nums[mid];
            if(nums[mid]>nums[0]){
                start=mid+1;
            }
            else if(nums[mid]<nums[0]){
                end = mid-1;
            }
        }
        return INT_MAX;
    }
};
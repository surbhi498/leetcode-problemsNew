class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int start =0;
        int end = n-1;
        int mid;
        if(start==end) return nums[start];
        while(start<=end){
             mid=start+(end-start)/2;
            if(mid ==0 || mid==(n-1)) return nums[mid];
            if((nums[mid] != nums[mid-1]) && (nums[mid] != nums[mid+1])){
                return nums[mid];
            }
            else if(((mid%2==1) && (nums[mid]==nums[mid-1])) || ((mid%2==0) && (nums[mid]==nums[mid+1]))){
                start=mid+1;
            }
            else{
                end=mid-1;
            }        
        }
        return -1;
    }
};
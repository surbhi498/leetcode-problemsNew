class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        int start=0;
        int end = n-1;
        int sum=0;
        sort(nums.begin(),nums.end());
        while(start<end){
            sum+=(abs(nums[end]-nums[start]));
            start++;
            end--;
        }    
        return sum;
    }
};
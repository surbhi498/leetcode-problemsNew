class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        if(n<2) return 0;
        int max1=INT_MIN;
        sort(nums.begin(),nums.end());
        vector<int> jk;
        for(int i=0;i<(n-1);i++){
            int diff = nums[i+1]-nums[i];
           max1=max(max1, diff);
        }
        return max1;
    }
};
class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        for(int i=1;i<n;i++) {
            nums[i]=max(nums[i-1], nums[i]+i);
        }
        int ind=0;
        int ans=0;
        while(ind<(n-1)) {
            ans++;
            ind=nums[ind];
        }
        return ans;
    }
};
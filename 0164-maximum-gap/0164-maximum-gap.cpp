class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        if(n<2) return 0;
        sort(nums.begin(),nums.end());
        vector<int> jk;
        for(int i=0;i<(n-1);i++){
            int diff = nums[i+1]-nums[i];
            jk.push_back(diff);
        }
        int vb= *max_element(jk.begin(),jk.end());
        return vb;
    }
};
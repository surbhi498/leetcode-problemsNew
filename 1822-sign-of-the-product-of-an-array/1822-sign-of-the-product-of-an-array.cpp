class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n = nums.size();
        long long prod=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            prod*=1;
            else if(nums[i]<0)
            prod*=-1;
            else
            {
                return 0;
            }    
        }    
       return prod;
    }
};
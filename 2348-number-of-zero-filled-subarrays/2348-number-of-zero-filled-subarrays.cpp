class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0;
        long long count=0;
        for(auto jk : nums){
            if(jk==0)
            count++;
            else
            count=0;
            ans+=count;
        }
        return ans;
    }
};
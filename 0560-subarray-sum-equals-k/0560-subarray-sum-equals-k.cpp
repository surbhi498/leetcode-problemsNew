class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> mg(n,0);
        int count1=0;
        map<int,int> mp;
        mp[0]=1;
        mg[0]=nums[0];
        for(int i=1;i<n;i++){
            mg[i]=nums[i]+mg[i-1];
           
            
        }
        for(int i=0;i<n;i++){
            int yu = mg[i]-k;
            if(mp.count(yu)>0)
            count1+=mp[yu];
            mp[mg[i]]++;
        }
        return count1;
    }
};
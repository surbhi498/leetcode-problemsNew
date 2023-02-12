class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> jk;
         set<vector<int>> mn;
            
        sort(nums.begin(),nums.end());
        for(int i=0;i<(n);i++) {
           // int sum1 = 0-nums[i];
           
            int start=i+1;
            int end = n-1;
            while(start<end) {
                int sum1 = nums[i]+nums[start]+nums[end];
                if(sum1==0){
                    mn.insert({nums[i],nums[start],nums[end]});
                    start++;
                    end--;
                   
                    
                    
                }
                else if(sum1>0) {
                    end--;
                }
                else{
                    start++;
                }
            }
            
        }
        for(auto yu : mn) jk.push_back(yu);
        return jk;
    }
};
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int curr_sum=0;
        int prevsum=0;
        int max1=INT_MIN;
        for(int i=0;i<n;i++){
            curr_sum+=nums[i];
            max1 =max(max1,curr_sum);   
            if(curr_sum<0){
            //   prevsum+=curr_sum;
               curr_sum=0; 
            }
         
        }
        return max1;
        
    }
};
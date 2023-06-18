class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
     int n = nums.size();
     sort(nums.begin(),nums.end());
     int min1=INT_MAX;
     for(int i=0;i<(n-1);i++){
         min1=min(min1,abs(nums[i+1]-nums[i]));
     }   
     return min1;   
    }
};
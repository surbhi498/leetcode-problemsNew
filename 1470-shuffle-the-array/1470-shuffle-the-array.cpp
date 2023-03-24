class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
       
       int j=2*n-1; 
        for(int i=0;i<n;i++){
            nums[i]=nums[i] << 10;
            nums[i]=nums[i] | nums[i+n];
        }
        for(int i=n-1;i>=0;i--){
            int gh = pow(2,10)-1;
            int y= nums[i] & gh;
            int x = nums[i] >> 10;
            nums[j]=y;
            nums[j-1]=x;
            j=j-2;
        }
        return nums;
    }
};
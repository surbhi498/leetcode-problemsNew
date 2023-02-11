class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n);
        vector<int> kl(n);
        vector<int> right(n);
        left[0]=nums[0];
        for(int i=1;i<n;i++) {
            left[i]=left[i-1]*nums[i];
        }
        right[n-1]=nums[n-1];
        for(int j=n-2;j>=0;j--){
            right[j]=right[j+1]*nums[j];
        }
        kl[0]=right[1];
        kl[n-1]=left[n-2];
        for(int i=1;i<(n-1);i++) {
            int gh = left[i-1]*right[i+1];
            kl[i]=gh;
        }
        return kl;
        
    }
};
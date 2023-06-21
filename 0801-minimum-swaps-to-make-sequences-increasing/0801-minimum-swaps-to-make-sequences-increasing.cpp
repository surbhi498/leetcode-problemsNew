class Solution {
public:
    int minSwap(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        vector<int> swap(n,1);
        vector<int> nonswap(n,0);
        for(int i=1;i<n;i++){
             nonswap[i] = swap[i] = n;
            if(nums1[i-1]<nums1[i] && nums2[i-1]<nums2[i]){
                // nums1 and nums2 are strictly increasing
                nonswap[i]=nonswap[i-1];
                swap[i]=swap[i-1]+1;
        }
        if(nums1[i-1]<nums2[i] && nums2[i-1]<nums1[i]){
            swap[i]=min(1+nonswap[i-1],swap[i]);
            nonswap[i]=min(nonswap[i],swap[i-1]);
        }
    }
     return min(swap[n-1],nonswap[n-1]);
    }
};
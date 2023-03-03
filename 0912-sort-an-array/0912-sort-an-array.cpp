class Solution {
public:
    void merge(vector<int>& nums, int left, int mid, int right){
        int n = nums.size();
        vector<int> yu(right-left+1);
        int k=0;
        int gh = mid;
        int bn = mid+1;
        int kl = left;
        int op = right;
        while(left<=gh && bn<=right){
            if(nums[left]<nums[bn]){
            yu[k++]=nums[left];
            left++;
        }
        else if(nums[left]>nums[bn]){
            yu[k++]=nums[bn];
            bn++;
        }
        else{
            yu[k++]=nums[left];
            yu[k++]=nums[bn];
            left++;
            bn++;
        }
        }    
        while(left<=mid){
            yu[k++]=nums[left];
            left++;
        }
        while(bn<=right){
            yu[k++]=nums[bn];
            bn++;
        }
        for(int i=kl;i<=op;i++){
            nums[i]=yu[i-kl];
        }
    }
    void mergesort(vector<int>& nums, int left, int right){
        if(left>=right)
        return;
        int mid =(left+right)/2;
        mergesort(nums, left, mid);
        mergesort(nums,mid+1, right);
        merge(nums, left, mid,right);
    }
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        
        mergesort(nums,0,n-1);
        return nums;
        
    }
};
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int n = nums.size();
        int lastinvalidindex =-1;
        int lastminindex=-1;
        int lastmaxindex=-1;
        long long count=0;
        for(int i=0;i<n;i++){
            if(nums[i]>=minK && nums[i]<= maxK){
                if(nums[i]==minK) lastminindex=i;
                  
                 if(nums[i]==maxK) lastmaxindex=i;
               
                count += max(0,min(lastminindex,lastmaxindex)-lastinvalidindex);
            }
            else{
                lastinvalidindex=i;
                lastminindex=-1;
                lastmaxindex=-1;
            }
        }
        return count;
    }
};
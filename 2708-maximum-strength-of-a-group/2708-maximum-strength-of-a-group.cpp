class Solution {
public:
    long long max1 = LLONG_MIN; 
    long long rec(int i, vector<int>& nums, long long sum, bool gh) {
        if (i == nums.size()) {
            if(!gh){
               
                for(auto bn : nums){
                    if(bn<0 && bn>max1){
                        max1=bn;
                    }
                }
                 return max1;
            }
          
            return sum;
        }

      long long take =  rec(i + 1, nums, sum * nums[i],true);
      long long nottake =  rec(i + 1, nums, sum, gh);
      return max(take,nottake);
    }

    long long maxStrength(vector<int>& nums) {
        bool jk =false;
       return rec(0, nums, 1,jk);
       // return max1 == LLONG_MIN ? 0 : max1;
    }
};

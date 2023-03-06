class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        int n = nums.size();
      //  long long res = (long long)((k*(k+1))/2);
        long long res = (long long)k * (k + 1) / 2;
        set<int> s;
        for(auto gh : nums){
            s.insert(gh);
        }
        for(auto x : s){
            if(x<=k){
                res+=(++k)-x;
            }
        }
        return res;
    }
};
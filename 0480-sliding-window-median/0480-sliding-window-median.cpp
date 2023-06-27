class Solution {
public:
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        vector<double> medians;
        int n = nums.size();
        multiset<int> window(nums.begin(), nums.begin()+k);
        auto mid = next(window.begin(),k/2);
        for(int i=k;;i++){
            //push current median
            medians.push_back(((double)(*mid)+*next(mid,k%2-1))*0.5);
            if(i==n) break;
            window.insert(nums[i]);
            if(nums[i]<*mid) mid--;
            if(nums[i-k]<=*mid) mid++;
            window.erase(window.lower_bound(nums[i-k]));
        }
        return medians;
    }
};
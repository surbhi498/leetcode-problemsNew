class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        vector<int> answer;
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++)
        {
            nums[i]=nums[i]+nums[i-1];
        }
        for(auto gh : queries)
        {

       int index = upper_bound(nums.begin(),nums.end(),gh)-nums.begin();
       answer.push_back(index);
        }
        return answer;
    }
};
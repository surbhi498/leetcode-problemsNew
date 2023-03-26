class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        int gh = 2*n;
        vector<int> yu(gh);
        for(int i=0;i<n;i++){
            yu[i]=nums[i];
            yu[i+n]=nums[i];
        }
        return yu;
    }
};
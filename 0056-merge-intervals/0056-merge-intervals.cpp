class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> merged;
        sort(intervals.begin(),intervals.end());
        for(auto gh : intervals){
            if(merged.empty() || merged.back()[1] < gh[0]){
                merged.push_back(gh);
            }
            else{
                merged.back()[1]= max(merged.back()[1],gh[1]);
            }
        }
        return merged;
    }
};
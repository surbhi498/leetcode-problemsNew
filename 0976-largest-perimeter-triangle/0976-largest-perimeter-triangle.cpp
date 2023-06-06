class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> mg;
        int min1=INT_MIN;
        int first=0;
        int second = 1;
        int third = 2;
        int semi=0;
        while(third<n){
            vector<int> yu;
            int cv = nums[first]+nums[second];
            if(cv>nums[third]){
    
                yu.push_back(nums[first]);
                 yu.push_back(nums[second]);
                 yu.push_back(nums[third]);
                 mg.push_back(yu);
            }
           first=second;
            
           second=third;
           third++;
        }
        for(auto gh : mg){
            semi=gh[0]+gh[1]+gh[2];
            cout<<semi<<endl;
            min1=max(min1,semi);
        }
        if(min1==INT_MIN) return 0;
        return min1;
    }
};
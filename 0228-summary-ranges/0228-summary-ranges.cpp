class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
        vector<string> mk;
        for(int i=0;i<n;i++){
            int start=nums[i];
            int j=i+1;
            while((j)<n && (nums[j])==(nums[j-1]+1)){
              //  start=start+1;
                j=j+1;
            }
           
            cout<<nums[i]<<endl;
            if(nums[i]==nums[j-1])
            {
                string xc = to_string(nums[i]);
                mk.push_back(xc);
            } 
            else
             mk.push_back(to_string(nums[i])+"->"+to_string(nums[j-1]));
             i=--j;
        }
        return mk;
    }
};
        
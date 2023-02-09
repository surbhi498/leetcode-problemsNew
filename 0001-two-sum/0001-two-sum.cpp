class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
       // sort(nums.begin(),nums.end());
        int i=0;
        int j=n-1;
        vector<int> kl;
        vector<pair<int,int>> op;
        for(int i=0;i<n;i++) {
            op.push_back({nums[i],i});
        }
        sort(op.begin(),op.end());
        while(i<j) {
            pair<int,int> mn = op[i];
            pair<int,int> xc = op[j];
            int vb = mn.first;
            int cf = xc.first;
            if((vb+cf)==target)
            {
             kl.push_back(mn.second);
             kl.push_back(xc.second); 
             i++;
             j--;   
            }    
            else if((vb+cf)>target) {
                j--;
            }
            else {
                i++;
            }
             
        }
        return kl;
    }
};
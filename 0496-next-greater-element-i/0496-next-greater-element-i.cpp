class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        stack<int> jk;
        vector<int> nm;
        int vb=0;
        int y=0;
        int flag=0;
        for( auto gh : nums1){
            flag=0;
            for(vb =0;vb<nums2.size();vb++){
                if (nums2[vb] != gh){
                   // jk.push(nums2[vb]);
                }
                else{
                    break;
                }
                
            }
           // jk.push(nums2[vb]);
            for(y=vb+1;y<nums2.size();y++){
                if(nums2[y]<=gh){
                    continue;
                }
                else{
                    flag=1;
                    break;
                }
            }
            if(flag)
            nm.push_back(nums2[y]);
            else
            nm.push_back(-1);
            // while (!jk.empty()) {
            //     jk.pop();
            // }
        }
        return nm;
    }
};
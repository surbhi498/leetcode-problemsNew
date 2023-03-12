class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> jk;
        int i=0;
        int j=0;
        while(i<m && j< n){
            if(nums1[i]<nums2[j]){
                jk.push_back(nums1[i]);
                i++;
            }
            else if(nums2[j]<nums1[i]){
                jk.push_back(nums2[j]);
                j++;
            }
            else{
                jk.push_back(nums1[i]);
                jk.push_back(nums2[j]);
                i++;
                j++;
            }
            
        }
        while(i<m){
            jk.push_back(nums1[i]);
            i++;
        }
        while(j<n){
            jk.push_back(nums2[j]);
            j++;
        }
        for(int i=0;i<(m+n);i++){
            cout<<jk[i];
        }
        for(int i=0;i<(m+n);i++){
            
            nums1[i]=jk[i];
        }
    }
};
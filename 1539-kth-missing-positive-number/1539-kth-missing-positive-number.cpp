class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int ret=k;
        int i=0;
        while(i<n && arr[i++]<=ret){
            ret++;
        }
        return ret;
    }
};
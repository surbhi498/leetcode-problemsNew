class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int max1 = arr[n-1];
        map<int,int> mp;
        int ans=0;
        
        for(auto gh : arr){
            mp[gh]++;
        }
        for(int i=1;i<=1000000;i++){
            if(mp.find(i)==mp.end()){
            k--;        
            }
            if(k==0){
            ans=i;
            break;    
            }
        }
        return ans;
        
    }
};
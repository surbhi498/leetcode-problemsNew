class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n = nums.size();
        map<int,int> mp;
        int count=0;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        if(k==0){
            for(auto it : mp){
                cout<<it.second<<endl;
                if(it.second>1){
                    count++;
                }
            }
            return count;
        }
        for(auto hj : nums){
            int vb = hj+k;
            if(mp.find(vb) != mp.end()){
                mp[vb]=0;
                if(mp[vb]==0){
                    mp.erase(vb);
                }
                count++;
            }
        }
        return count;
    }
};
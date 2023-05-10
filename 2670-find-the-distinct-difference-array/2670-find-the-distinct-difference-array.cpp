class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
      int n = nums.size();
    vector<int> result(n, 0);
    unordered_map<int,int> mp;
    vector<int> suffix(n,0);
    // Traverse from left to right
    for (int i = 0; i < n; i++) {
        mp[nums[i]]++;
        result[i] = mp.size();
    }

    mp.clear();
    for(int i=n-1;i>=0;i--){
        mp[nums[i]]++;
        suffix[i]=mp.size();   
    }
    // Traverse from right to left
    for (int i = n - 1; i >= 0; i--) {
        
        if(i < (n-1))
        result[i] = result[i]-(suffix[i+1]);
        else
        result[i]=result[i];    
            
    }

    return result;
    }
};
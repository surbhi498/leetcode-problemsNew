class Solution {
public:
    static bool compare(const pair<int,int> a, const pair<int,int> b) {
        return a.second>b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        map<int,int> mp;
        vector<int> mn;
        vector<pair<int,int>> kl;
        for(int i=0;i<n;i++) {
            mp[nums[i]]++;
        }
        
        for(auto it : mp) {
            kl.push_back(make_pair(it.first,it.second));
        }
        sort(kl.begin(),kl.end(),compare);
        for(int i=0;i<k;i++) {
            mn.push_back(kl[i].first);
        }
        return mn;
    }
};
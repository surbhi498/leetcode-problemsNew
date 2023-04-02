class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size();
        int m = potions.size();
        vector<int> hj;
        sort(potions.begin(),potions.end());
        for(int i=0;i<n;i++){
            long long gh = ceil((double)success/spells[i]);
            long long vb = lower_bound(potions.begin(),potions.end(),gh)-potions.begin();
            hj.push_back(m-vb);
        }
        return hj;
        
    }
};
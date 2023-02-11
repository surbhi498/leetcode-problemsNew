class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        map<string ,vector<int>> mp;
        vector<vector<string>> op;
        for(int i=0;i<n;i++) {
            string gh = strs[i];
            sort(gh.begin(),gh.end());
            mp[gh].push_back(i);
        }
        map<string,vector<int>> :: iterator it;
        for(auto it : mp) {
            vector<int> op1 = it.second;
            vector<string> kl;
            for(int i=0;i<op1.size();i++) {
                kl.push_back(strs[op1[i]]);
            }
            op.push_back(kl);
        }
        return op;
    }
};
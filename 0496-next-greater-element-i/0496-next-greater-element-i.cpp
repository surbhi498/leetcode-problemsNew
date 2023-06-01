class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> jk(n, -1);
        stack<pair<int,int>> op;
        map<int,int> mp;

        for (int i = m - 1; i >= 0; i--) {
            while (!op.empty() && nums2[i] > op.top().first) {
                op.pop();
            }

            if (!op.empty()) {
                mp[nums2[i]] = op.top().first;
            }

            op.push(make_pair(nums2[i], i));
        }

        for (int i = 0; i < n; i++) {
            if (mp.find(nums1[i]) != mp.end()) {
                jk[i] = mp[nums1[i]];
            }
        }

        return jk;
    }
};
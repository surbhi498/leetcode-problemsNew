class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n = s.size();
        stack<pair<char, int>> mg;
        string gh = "";

        for (int i = 0; i < n; i++) {
            if (mg.empty() || s[i] != mg.top().first) {
                mg.push({ s[i], 1 });
            } else {
                int count = mg.top().second + 1;
                mg.push({ s[i], count });

                if (count == k) {
                    int vb = k;
                    while (vb--) {
                        mg.pop();
                    }
                }
            }
        }

        while (!mg.empty()) {
            gh += mg.top().first;
            mg.pop();
        }

        reverse(gh.begin(), gh.end());
        return gh;
    }
};

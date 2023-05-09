/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if (root == nullptr) return 0;

        queue<pair<TreeNode*, unsigned long long>> qt;
        unsigned long long maxwidth = 0;
        qt.push({root, 0});

        while (!qt.empty()) {
            int n = qt.size();
            unsigned long long levelStart = qt.front().second;
            unsigned long long levelEnd = qt.back().second;

            maxwidth = max(maxwidth, levelEnd - levelStart + 1);

            for (int i = 0; i < n; i++) {
                pair<TreeNode*, unsigned long long> elm = qt.front();
                qt.pop();

                TreeNode* node = elm.first;
                unsigned long long position = elm.second;

                if (node->left != nullptr) {
                    qt.push({node->left, 2 * position});
                }
                if (node->right != nullptr) {
                    qt.push({node->right, 2 * position + 1});
                }
            }
        }

        return static_cast<int>(maxwidth);
    }
};

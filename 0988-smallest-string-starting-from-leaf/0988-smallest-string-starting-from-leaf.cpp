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
    string ans = "";
    string gh = "";

    void dfs(TreeNode* node) {
        if (node == nullptr) {
            return;
        }

        // append current node's value to gh string
        gh += node->val + 'a';

        // check if current node is a leaf node
        if (node->left == nullptr && node->right == nullptr) {
            // update ans if gh forms a lexicographically smaller string
            string reversed_gh = gh;
            reverse(reversed_gh.begin(), reversed_gh.end());
            if (ans == "" || reversed_gh < ans) {
                ans = reversed_gh;
            }
        }

        // explore left and right subtrees
        dfs(node->left);
        dfs(node->right);

        // backtrack by removing current node's value from gh string
        gh.pop_back();
    }

    string smallestFromLeaf(TreeNode* root) {
        dfs(root);
        return ans;
    }
};


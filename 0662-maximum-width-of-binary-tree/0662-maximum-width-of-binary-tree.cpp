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
        if(root==NULL) return 0;
        queue<pair<TreeNode*, long long>> qt;
       unsigned long long maxwidth=0;
        qt.push({root,0});
        while(!qt.empty()){
            unsigned  long long n = qt.size();
            pair<TreeNode*,  unsigned long long> jk = qt.front();
            for(int i=0;i<n;i++)
            {
                pair<TreeNode*, unsigned long long> elm = qt.front();
                qt.pop();
                TreeNode* gh = elm.first;
                 unsigned long long fg = elm.second;
                if(gh->left != NULL){
                    qt.push({gh->left,2*fg});
                }
                if(gh->right != NULL){
                    qt.push({gh->right, 2*fg+1});
                }
                maxwidth = max(maxwidth,(fg-jk.second+1));
            }     
            
        }
        return static_cast<int>(maxwidth);
    }
};
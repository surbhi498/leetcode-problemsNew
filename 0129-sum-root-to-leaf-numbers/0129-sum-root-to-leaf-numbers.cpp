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
    long long ans=0;
    long long temp=0;
    int sumNumbers(TreeNode* root) {
        if(root==NULL) return 0;
        temp=temp*10+root->val;
        if(root->left==NULL && root->right==NULL){
            ans+=temp;
        }
        if(root->left){
        sumNumbers(root->left);
        }
        if(root->right){
        sumNumbers(root->right);    
        }
        temp=temp/10;
        return ans;
    }
};
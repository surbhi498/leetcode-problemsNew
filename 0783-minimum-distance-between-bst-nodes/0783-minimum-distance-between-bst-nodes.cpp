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
    vector<int> jk;
    void inorder1(TreeNode* root){
        if(root==NULL){
            return;
        }
        inorder1(root->left);
        jk.push_back(root->val);
        inorder1(root->right);
        
    }
    int minDiffInBST(TreeNode* root) {
        if(!jk.empty()) jk.clear();
        inorder1(root);
        int min1 = INT_MAX;
        for(int i=0;i<(jk.size()-1);i++){
        min1=  min(min1,(jk[i+1]-jk[i]));  
        }
        
        return min1;
    }
};
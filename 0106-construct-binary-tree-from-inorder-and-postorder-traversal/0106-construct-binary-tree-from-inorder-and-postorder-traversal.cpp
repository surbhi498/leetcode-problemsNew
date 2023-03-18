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
  
    TreeNode* buildTree1(vector<int>& inorder, int g, int bn, vector<int>& postorder, int m, int p){
        if(g>bn) return NULL;
        TreeNode* root = new TreeNode(postorder[p]);
        int gh=0;
        int kl = root->val;
        for(int i=g;i<=bn;i++){
            if(kl==inorder[i]){
                gh=i;
                break;
            }
        }
        int noofelements=gh-1-g;
        int x = noofelements+m;
        root->left = buildTree1(inorder,g,gh-1, postorder,m,x);
        root->right= buildTree1(inorder,gh+1,bn,postorder,x+1,p-1);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int i=0;
        int j=inorder.size()-1; 
        int y=postorder.size()-1;
        
        int start=0;
        return buildTree1(inorder, i, j, postorder,start,y);
    }
};
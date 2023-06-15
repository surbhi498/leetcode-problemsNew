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
    void inorder(TreeNode* root, vector<int>& op){
        if(root==NULL) return;
        
        if(root && root->left){
           
           inorder(root->left,op); 
        }
        if(root)
         op.push_back(root->val);
         if(root && root->right){
           
           inorder(root->right, op); 
        }
        
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int> kl;
        inorder(root,kl);
         int n = kl.size();
        int min1=INT_MAX;
        for(int i=0;i<(n-1);i++){
        //  cout<<kl[i]<<endl;  
          min1 = min(min1,abs(kl[i]-kl[i+1]));  
        }
       return min1;
    }
};
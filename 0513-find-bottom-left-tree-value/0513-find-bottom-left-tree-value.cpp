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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> qt;
        int data = 0;
        qt.push(root);
        while(!qt.empty()){
            int fg = qt.size();
           // TreeNode* kl = qt.front();
            data=qt.front()->val;
            for(int i=0;i<fg;i++)
            {
             TreeNode* hj = qt.front();
             
             qt.pop();   
             if(hj->left != NULL)
             {
                 qt.push(hj->left);
             }    
             if(hj->right != NULL){
                 qt.push(hj->right);
             }   
                
            }    
        }
        return data;
    }
};
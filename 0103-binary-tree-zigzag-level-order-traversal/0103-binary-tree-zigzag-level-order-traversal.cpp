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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
     vector<vector<int>> gh;
     vector<int> temp;
     queue<TreeNode*> q;
     if(root==NULL) return {};   
     q.push(root);
     gh.push_back({root->val});
     int level=1;   
     while(!q.empty()){
         level++;
         int size = q.size();
         while(size--){
             TreeNode* jk = q.front();
             q.pop();
             if((jk->left) != NULL){
                 q.push(jk->left);
                 temp.push_back(jk->left->val);
             }
             if((jk->right) != NULL){
                 q.push(jk->right);
                 temp.push_back(jk->right->val);
             }
             
         }
         if((level%2)==0){
             reverse(temp.begin(),temp.end());
         }
         if(temp.size()>0)
         gh.push_back(temp);
         if(temp.size()>0) temp.clear();
         
     }  
    return gh;    
    }
};
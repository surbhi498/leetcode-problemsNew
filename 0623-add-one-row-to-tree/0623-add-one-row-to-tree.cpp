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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        queue<pair<TreeNode*,int>> q;
       if(depth==1){
           TreeNode* jk1 = new TreeNode(val);
            jk1->left=root;   
            root=jk1;
            return root; 
        }
        q.push({root,1});
        TreeNode* jk = new TreeNode(val);
        int level=1;
        while(!q.empty()){
            int size1=q.size();
            level++;    
            TreeNode* right1;
            TreeNode* left1;
            for(int i=0;i<size1;i++){
            TreeNode* yu = q.front().first;
            int level1 = q.front().second;    
            q.pop();
            right1 = yu->right;
            left1 = yu->left;
            TreeNode* leftNewNode = new TreeNode(val);
            TreeNode* rightNewNode = new TreeNode(val);    
             if(left1){
                q.push({left1,level});
            }
            if(right1){
                q.push({right1,level});
            }
                
            if(level1==(depth-1)){
                cout<<yu->val<<endl;
                yu->right=leftNewNode;
                yu->left=rightNewNode;
                leftNewNode->right=right1;
                rightNewNode->left=left1;
                break;
            }
             
            }
            
        }
        return root;
    }
};
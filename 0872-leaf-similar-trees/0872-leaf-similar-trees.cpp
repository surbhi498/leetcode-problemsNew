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
    void check(TreeNode* root1, vector<int>& gh){
        if(root1==NULL) return;
        if(root1->left == NULL && root1->right == NULL){
            cout<<"hi"<<endl;
            gh.push_back(root1->val);
        }
        if(root1->left)
        check(root1->left, gh);
        if(root1->right)
        check(root1->right, gh);
        
    
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> gh;
        vector<int> mg;
        if(root1){
            check(root1,gh);
        }
        if(root2){
            check(root2,mg);
        }
        
        for(int i=0;i<gh.size();i++){
            cout<<gh[i]<<" ";
        }
        
         for(int i=0;i<mg.size();i++){
            cout<<mg[i]<<" ";
        }
        
        if(gh.size() != mg.size()){
            return false;
        }
        for(int i=0;i<gh.size();i++){
            if(gh[i] != mg[i]){
                return false;
            }
        }
        return true;
    }
};
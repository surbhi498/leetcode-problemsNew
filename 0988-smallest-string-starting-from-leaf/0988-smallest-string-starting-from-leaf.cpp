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
    string ans="";
    string gh = "";
    string smallestFromLeaf(TreeNode* root) {
        if(root == NULL) return "";
        gh+=root->val+'a';
        if(root->left==NULL && root->right==NULL){
            if(ans==""){
                string vb = gh;
                reverse(vb.begin(),vb.end());
                ans=vb;
            }
            else{
                string vb = gh;
                reverse(vb.begin(),vb.end());
                if(vb<ans){
                    cout<<vb<<endl;
                    ans=vb;
                }
            }
          
           //return; 
        }
     if(root->left){
           // char ch = root->left->val+'a';
            //gh+=ch;
            smallestFromLeaf(root->left);
            //root=root->left;
        }
       if(root->right){
            //char ch = root->right->val+'a';
            //gh+=ch;
             smallestFromLeaf(root->right);
            //root=root->right;
        }
         gh.pop_back();
       // reverse(ans.begin(),ans.end());
        return ans;
    }
};

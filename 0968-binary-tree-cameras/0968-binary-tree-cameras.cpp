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
    const int needcamera = -1, covered = 0, havecamera = 1;
    int camera=0;
     int dfs(TreeNode* root){
        
        if(!root) return covered; 
        int l1=dfs(root->left);
        int r1=dfs(root->right); 
         if(l1 == covered && r1 == covered) {
          
            return needcamera;
        }
          if(l1 == needcamera || r1 == needcamera) {
           
            camera++;
            return havecamera;
            
        }
       if(l1 == havecamera || r1 == havecamera) {
           
            return covered;
        }
       
        
       return -1;  
    }
    int minCameraCover(TreeNode* root) {
        camera=0;
        int status_code=dfs(root);
        if(status_code==needcamera){
            camera++;
          
        }
          return camera;
    }
};
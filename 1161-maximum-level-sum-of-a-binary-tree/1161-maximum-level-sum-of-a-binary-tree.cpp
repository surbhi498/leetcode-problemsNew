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
    int maxLevelSum(TreeNode* root) {
        queue<pair<TreeNode*,int>> q;
        q.push({root,1});
        int max1=INT_MIN;
        int sum=0;
        int answer=0;
        while(!q.empty()){
            int levelsize=q.size();
            sum=0;
             int currlevel;
            for(int i=0;i<levelsize;i++){
            pair<TreeNode*,int> kl = q.front();
            TreeNode* ff = kl.first;
            currlevel = kl.second;
            q.pop();
            sum+=ff->val;
            if(ff->left)    
            q.push({ff->left,currlevel+1});
            if(ff->right)
            q.push({ff->right,currlevel+1});    
                
            }
            if(sum>max1){
            max1=sum;     
            answer= currlevel;   
            }
        }
        return answer;
    }
};
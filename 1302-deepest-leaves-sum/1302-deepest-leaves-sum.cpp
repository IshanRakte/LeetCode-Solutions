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
    int deepestLeavesSum(TreeNode* root) {
        
        queue<TreeNode*> q;
        q.push(root);
        int nodesPushed = 1;
        int ans = root->val;
        
        while(!q.empty()){
            
            int nodesInCurrentLevel = nodesPushed;
            nodesPushed = 0;
            ans = 0;
            for(int i = 0; i < nodesInCurrentLevel; i++){
                
                TreeNode* frontNode = q.front();
                q.pop();
                ans += frontNode->val;
                
                if(frontNode->left != NULL){
                    q.push(frontNode->left);
                    nodesPushed++;
                }
                
                if(frontNode->right != NULL){
                    q.push(frontNode->right);
                    nodesPushed++;
                }
                
            }
            
        }
        
        return ans;
        
    }
};
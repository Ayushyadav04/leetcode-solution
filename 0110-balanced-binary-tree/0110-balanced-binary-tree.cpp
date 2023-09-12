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
    int depth(TreeNode* root){
        if(!root){
            return 0;
        }
        int ans=1;
        ans+=max(depth(root->left),depth(root->right));
        return ans;
    }
    bool isBalanced(TreeNode* root) {
        if(!root){
            return true;
        }
        if(abs(depth(root->left)-depth(root->right))<=1){
            return isBalanced(root->left) && isBalanced(root->right);
        }
        return false;
    }
};
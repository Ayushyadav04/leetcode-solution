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
    void fun(TreeNode* root,int count,int &ans){
        if(!root){
            return;
        }
        count*=10;
        count+=root->val;
        if(!root->left && !root->right){
            ans+=count;
        }
        fun(root->left,count,ans);
        count/=10;
        count*=10;
        count+=root->val;
        fun(root->right,count,ans);
    }
    int sumNumbers(TreeNode* root) {
        int count=0;
        int ans=0;
        fun(root,count,ans);
        return ans;
    }
};
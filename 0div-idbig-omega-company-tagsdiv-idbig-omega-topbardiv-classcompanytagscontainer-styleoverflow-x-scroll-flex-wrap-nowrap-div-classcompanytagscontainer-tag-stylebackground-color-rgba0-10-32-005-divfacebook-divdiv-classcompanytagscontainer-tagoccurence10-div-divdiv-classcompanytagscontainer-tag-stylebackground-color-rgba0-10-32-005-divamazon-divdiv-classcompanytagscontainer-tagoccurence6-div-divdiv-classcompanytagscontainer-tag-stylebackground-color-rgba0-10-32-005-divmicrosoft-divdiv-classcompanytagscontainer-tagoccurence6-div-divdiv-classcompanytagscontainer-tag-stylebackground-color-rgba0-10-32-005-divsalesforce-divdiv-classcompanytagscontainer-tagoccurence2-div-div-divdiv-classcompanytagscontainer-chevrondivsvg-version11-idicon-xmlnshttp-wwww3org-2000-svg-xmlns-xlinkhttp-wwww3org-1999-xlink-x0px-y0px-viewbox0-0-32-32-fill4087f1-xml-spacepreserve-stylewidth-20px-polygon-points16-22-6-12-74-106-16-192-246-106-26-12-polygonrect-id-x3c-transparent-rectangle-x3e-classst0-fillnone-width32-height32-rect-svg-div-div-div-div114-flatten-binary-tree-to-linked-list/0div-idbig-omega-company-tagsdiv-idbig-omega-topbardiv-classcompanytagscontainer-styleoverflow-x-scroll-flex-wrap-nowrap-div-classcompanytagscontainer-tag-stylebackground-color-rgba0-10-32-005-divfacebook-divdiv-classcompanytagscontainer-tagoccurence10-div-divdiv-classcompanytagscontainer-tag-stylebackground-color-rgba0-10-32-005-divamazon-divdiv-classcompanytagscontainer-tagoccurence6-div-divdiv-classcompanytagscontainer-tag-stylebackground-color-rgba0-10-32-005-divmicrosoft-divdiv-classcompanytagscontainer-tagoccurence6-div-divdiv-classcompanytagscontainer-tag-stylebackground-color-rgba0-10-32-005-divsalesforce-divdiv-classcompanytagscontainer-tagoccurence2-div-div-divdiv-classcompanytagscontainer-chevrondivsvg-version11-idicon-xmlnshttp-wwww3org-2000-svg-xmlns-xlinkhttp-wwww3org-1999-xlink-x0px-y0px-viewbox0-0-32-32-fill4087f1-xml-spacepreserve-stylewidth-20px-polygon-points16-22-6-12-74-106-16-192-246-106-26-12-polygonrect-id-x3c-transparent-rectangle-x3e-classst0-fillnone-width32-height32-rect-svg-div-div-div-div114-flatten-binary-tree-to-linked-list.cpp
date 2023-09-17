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
    void fun(vector<TreeNode*>& v,TreeNode* root){
        if(!root){
            return;
        }
        v.push_back(root);
        fun(v,root->left);
        fun(v,root->right);
    }
    void flatten(TreeNode* root) {
        vector<TreeNode*> v;
        fun(v,root);
        for(int i=1;i<v.size();i++){
            TreeNode* newnode=new TreeNode(v[i]->val);
            root->left=NULL;
            root->right=newnode;
            root=root->right;
        }
    }
};
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
    int le(TreeNode* leftt){
        if(!leftt){
            return 0;
        }
        int left_height=le(leftt->left);
        int right_height=le(leftt->right);
        return max(left_height,right_height)+1;
        
    }
    int dia(TreeNode* root) {
        if(!root){
            return 0;
        }
        int ans=0;
        ans+=le(root->left);
        ans+=le(root->right);
        return ans;
    }
    void so(TreeNode* root,vector<TreeNode*>& v){
        if(!root){
            return ;
        }
        v.push_back(root);
        so(root->left,v);
        so(root->right,v);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        vector<TreeNode*> v;
        so(root,v);
        int ans=INT_MIN;
        for(int i=0;i<v.size();i++){
            if(ans<dia(v[i])){
                ans=dia(v[i]);
            }
        }
        return ans;
    }
};
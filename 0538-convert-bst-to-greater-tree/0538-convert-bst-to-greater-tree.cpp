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
    void addd(TreeNode* root,stack<int>& s){
        if(!root){
            return ;
        }
        addd(root->left,s);
        if(!s.empty()){
            int t=s.top();
            s.push(t+root->val);
        }
        else{
            s.push(root->val);
        }
        addd(root->right,s);
    }
    void help(TreeNode* root, stack<int>& s1,int tt){
        if(!root){
            return;
        }
        help(root->left,s1,tt);
        if(!s1.empty()){
            int t=tt-s1.top();
            s1.pop();
            root->val+=t;
        }
        help(root->right,s1,tt);
    }
    TreeNode* convertBST(TreeNode* root) {
        if(!root){
            return root;
        }
        stack<int> s;
        addd(root,s);
        int tt=s.top();
        stack<int> s1;
        while(!s.empty()){
            int o=s.top();
            s.pop();
            s1.push(o);
        }
        help(root,s1,tt);
        return root;
    }
};
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        vector<int> temp;
        if(root==nullptr){
            return v;
        }
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            TreeNode* f=q.front();
            q.pop();
            if(f==NULL){
                v.push_back(temp);
                temp.clear();
                if(!q.empty()){
                    q.push(NULL);
                }
            }
            else{
                temp.push_back(f->val);
                if(f->left!=nullptr){
                    q.push(f->left);
                }
                if(f->right!=nullptr){
                    q.push(f->right);
                }
            }
        }
        return v;
    }
};
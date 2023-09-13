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
    void fun(TreeNode* root,int count,vector<int>& v){
      count+=root->val;
      if(!root->left && !root->right){
        v.push_back(count);
        count=0;
      }
      if(root->left){
        fun(root->left,count,v);
      }
      if(root->right){
        fun(root->right,count,v);
      }
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
      if(!root){
        return false;
      }
      int count=0;
      vector<int> v;
      fun(root,count,v);
      for(int i=0;i<v.size();i++){
        if(v[i]==targetSum){
          return true;
        }
      }
      return false;
    }
};
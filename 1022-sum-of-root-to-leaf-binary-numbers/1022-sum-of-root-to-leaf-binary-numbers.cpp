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
    void fun(TreeNode* root,string s,vector<string>& v){
      s+=to_string(root->val);
      if(!root->left && !root->right){
        v.push_back(s);
        s="";
      }
      if(root->left){
          fun(root->left,s,v);
      }
      if(root->right){
          fun(root->right,s,v);
      }
    }
    int sumRootToLeaf(TreeNode* root) {
      vector<string> v;
      int ans=0;
      if(!root){
          return 0;
      }
      string s="";
      fun(root,s,v);
      for(auto i:v){
        ans+=stoi(i,0,2);
      }
      return ans;
    }
};
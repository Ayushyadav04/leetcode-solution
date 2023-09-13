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
    void fun(TreeNode* root,vector<int> temp,vector<vector<int>>& v,int count,int t){
        temp.push_back(root->val);
        count+=root->val;
        if(!root->left && !root->right){
            if(count==t){
                v.push_back(temp);
            }
            temp.clear();
        }
        if(root->left){
            fun(root->left,temp,v,count,t);
        }
        if(root->right){
            fun(root->right,temp,v,count,t);
        }
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> v;
        if(!root){
            return v;
        }
        vector<int> temp;
        int count=0;
        fun(root,temp,v,count,targetSum);
        return v;
    }
};
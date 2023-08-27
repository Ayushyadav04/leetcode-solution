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
    void inorder(TreeNode* root,vector<int> &v){
        if(root==nullptr){
            v.push_back(-1);
            return;
        }
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    bool helper(TreeNode* lefttree, TreeNode* righttree){
        if(lefttree==NULL && righttree!=NULL){
            return false;
        }
        if(lefttree!=NULL && righttree==NULL){
            return false;
        }
        if(lefttree==NULL && righttree==NULL){
            return true;
        }
        if(lefttree->val!=righttree->val){
            return false;
        }
        return helper(lefttree->left,righttree->right) && helper(lefttree->right,righttree->left);
    }
    bool isSymmetric(TreeNode* root){
        // vector<int> v; 
        // inorder(root,v);
        // for(int i=0;i<v.size();i++){
        //     cout<<v[i]<<" ";
        // }
        // int i=0;
        // int j=v.size()-1;
        // while(i<j){
        //     if(v[i]!=v[j]){
        //         return false;
        //     }
        //     i++;
        //     j--;
        // }
        // return true;
        if(root==NULL){
            return true;
        }
        return helper(root->left,root->right);
    }
};
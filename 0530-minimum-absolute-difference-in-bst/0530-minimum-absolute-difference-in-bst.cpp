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
    void so(TreeNode* root,vector<int>& v){
        if(!root){
            return ;
        }
        v.push_back(root->val);
        so(root->left,v);
        so(root->right,v);
    }
    int getMinimumDifference(TreeNode* root) {
        int ans=INT_MAX;
        vector<int> v;
        so(root,v);
        sort(v.begin(),v.end());
        for(int i=0;i<v.size()-1;i++){
            if(v[i+1]-v[i]<ans){
                ans=v[i+1]-v[i];
            }
        }
        return ans;
    }
};
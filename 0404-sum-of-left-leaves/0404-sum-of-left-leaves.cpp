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
    int su(TreeNode* root){
        int ans=0;
        if(!root){
            return ans;
        }
        if(!root->left && !root->right){
            ans+=root->val;
            cout<<"Print"<<endl;
        }
        ans+=su(root->left);
        if(root->right){
            if(root->right->left || root->right->right){
                ans+=su(root->right);
            }
        }
        cout<<ans<<endl;
        return ans;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root->left && !root->right){
            return 0;
        }
        return su(root);
    }
};
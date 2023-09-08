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
    // void small(TreeNode* root,vector<int>& v){
    //     v.push_back(root->val);
    //     if(root->left){
    //         small(root->left,v);
    //     }
    //     if(root->right){
    //         small(root->right,v);
    //     }
    // }


    // void small(TreeNode* root,vector<int>& v){
    //     if(!root){
    //         return;
    //     }
    //     small(root->left,v);
    //     v.push_back(root->val);
    //     small(root->right,v);
    // }

    void small(TreeNode* root,int &ans,int &count,int k){
        if(!root)  return;
        small(root->left,ans,count,k);
        count++;
        if(count==k){
            ans=root->val;
            return;
        }
        small(root->right,ans,count,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        // vector<int> v;
        // small(root,v);
        // sort(v.begin(),v.end());
        // return v[k-1];
        
        // vector<int> v;
        // small(root,v);
        // return v[k-1];

        int count=0;
        int ans;
        small(root,ans,count,k);
        return ans;
    }
};
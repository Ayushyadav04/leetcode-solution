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
    // void left__(vector<int> nums, TreeNode* root){
    //     int q=nums.size()-1;
    //     while(q>=0){
    //         root->left=new TreeNode(nums[q]);
    //         q--;
    //         root=root->left;
    //     }
    // }
    // void right__(vector<int> nums, TreeNode* root){
    //     int q=0;
    //     while(q<nums.size()){
    //         root->right=new TreeNode(nums[q]);
    //         q++;
    //         root=root->right;
    //     }
    // }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        // if(nums.empty()){
        //     return nullptr;
        // }
        // if(nums.size()==1){
        //     return new TreeNode(nums[0]);
        // }
        // int mid=nums.size()/2;
        // TreeNode* root=new TreeNode(nums[mid]);
        // vector<int> left_={nums.begin(),nums.begin()+mid};
        // vector<int> right_={nums.begin()+mid+1,nums.end()};
        // left__(left_,root);
        // right__(right_,root);
        // return root;
        if(nums.empty()){
            return nullptr;
        }
        if(nums.size()==1){
            return new TreeNode(nums[0]);
        }
        int mid=nums.size()/2;
        TreeNode* root=new TreeNode(nums[mid]);
        vector<int> left_={nums.begin(),nums.begin()+mid};
        vector<int> right_={nums.begin()+mid+1,nums.end()};
        root->left=sortedArrayToBST(left_);
        root->right=sortedArrayToBST(right_);
        return root;
    }
};
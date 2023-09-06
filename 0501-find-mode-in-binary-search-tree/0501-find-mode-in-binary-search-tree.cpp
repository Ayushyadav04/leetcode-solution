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
    void ma(TreeNode* root,unordered_map<int,int>& count){
        if(!root){
            return;
        }
        if(count.find(root->val)!=count.end()){
            count[root->val]+=1;
        }
        else{
            count[root->val]=1;
        }
        ma(root->left,count);
        ma(root->right,count);
    }
    vector<int> findMode(TreeNode* root) {
        int max=INT_MIN;
        vector<int> v;
        unordered_map<int,int> count;
        ma(root,count);
        for(auto i:count){
            if(i.second>max){
                max=i.second;
                v.clear();
                v.push_back(i.first);
            }
            else if(i.second==max){
                v.push_back(i.first);
            }
        }
        return v;
    }
};
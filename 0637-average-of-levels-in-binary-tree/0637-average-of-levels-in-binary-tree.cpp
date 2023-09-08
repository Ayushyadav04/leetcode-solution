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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> v;
        double temp=0;
        double count=0;
        if(!root){
            return v;
        }
        queue<TreeNode*> q1;
        q1.push(root);
        q1.push(NULL);
        while(!q1.empty()){
            TreeNode* f=q1.front();
            q1.pop();
            if(f==nullptr){
                double ans=temp/count;
                v.push_back(ans);
                temp=0;
                count=0;
                if(!q1.empty()){
                    q1.push(NULL);
                }
            }
            else{
                temp+=f->val;
                count++;
                if(f->left){
                    q1.push(f->left);
                }
                if(f->right){
                    q1.push(f->right);
                }
            }
        }
        return v;
    }
};
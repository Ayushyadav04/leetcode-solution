/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* fun(vector<int> v){
        if(v.empty()){
            return nullptr;
        }
        TreeNode* head=new TreeNode();
        int mid=v.size()/2;
        head->val=v[mid];
        vector<int> left_(v.begin(),v.begin()+mid);
        vector<int> right_(v.begin()+mid+1,v.end());
        head->left=fun(left_);
        head->right=fun(right_);
        return head;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> v;
        while(head){
            v.push_back(head->val);
            head=head->next;
        }
        return fun(v);
    }
};
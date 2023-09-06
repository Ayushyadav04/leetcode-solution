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
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        ListNode* pre=NULL;
        ListNode* curr=head;
        ListNode* succ=head->next;
        while(curr!=nullptr){
            curr->next=pre;
            pre=curr;
            curr=succ;
            if(curr){
                succ=succ->next;
            }
        }
        return pre;
    }
};
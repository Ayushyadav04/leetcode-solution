/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> as;
        while(head!=nullptr && as.find(head)==as.end()){
            as.insert(head);
            head=head->next;
        }
        return head!=nullptr;
    }
};
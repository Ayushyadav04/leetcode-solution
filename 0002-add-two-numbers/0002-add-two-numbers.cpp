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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyhead = new ListNode(0);
        ListNode* head=dummyhead;
        vector<int> v;
        int carry=0;
        while(l1!=nullptr || l2!=nullptr || carry!=0){
            int d1,d2;
            if(l1==nullptr){
                d1=0;
            }
            else{
                d1=l1->val;
                l1=l1->next;
            }
            if(l2==nullptr){
                d2=0;
            }
            else{
                d2=l2->val;
                l2=l2->next;
            }
            int sum=d1+d2+carry;
            ListNode* node=new ListNode(sum%10);
            head->next=node;
            head=head->next;
            carry=sum/10;
        }
        dummyhead=dummyhead->next;
        return dummyhead;
    }
};
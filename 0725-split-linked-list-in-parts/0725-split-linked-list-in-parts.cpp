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
    int no(ListNode* head){
        int count=0;
        while(head!=nullptr){
            head=head->next;
            count++;
        }
        return count;
    }
    ListNode* qw(ListNode* head,int k){
        ListNode* temp=new ListNode(0);
        ListNode* temp1=temp;
        while(k!=0){
            ListNode* node=new ListNode(head->val);
            temp1->next=node;
            temp1=temp1->next;
            head=head->next;
            k--;
        }
        temp=temp->next;
        return temp;
    }
    ListNode* qe(ListNode* head,int k){
        while(k!=0){
            head=head->next;
            k--;
        }
        return head;
    }
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> v;
        int lsize=no(head);
        if(k>=lsize){
            while(head!=nullptr){
                ListNode* node=new ListNode(head->val);
                v.push_back(node);
                head=head->next;
            }
            for(int i=lsize;i<k;i++){
                v.push_back(NULL);
            }
        }
        else{
            int rem=lsize%k;
            int div=lsize/k;
            for(int i=0;i<rem;i++){
                v.push_back(qw(head,div+1));
                head=qe(head,div+1);
            }
            for(int i=rem;i<k;i++){
                v.push_back(qw(head,div));
                head=qe(head,div);
            }
        }
        return v;
    }
};
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
    bool isPalindrome(ListNode* head) {
        stack<int> s,s1;
        while(head!=NULL){
            s.push(head->val);
            head=head->next;
        }
        int t=s.size();
        if(t%2==0){
            for(int i=0;i<t/2;i++){
                s1.push(s.top());
                s.pop();
            }
            for(int i=0;i<t/2;i++){
                if(s.top()!=s1.top()){
                    return false;
                }
                s.pop();
                s1.pop();
            }
        }
        else{
            for(int i=0;i<t/2;i++){
                s1.push(s.top());
                s.pop();
            }
            s.pop();
            for(int i=0;i<t/2;i++){
                if(s.top()!=s1.top()){
                    return false;
                }
                s.pop();
                s1.pop();
            }
        }
        return true;

    }
};
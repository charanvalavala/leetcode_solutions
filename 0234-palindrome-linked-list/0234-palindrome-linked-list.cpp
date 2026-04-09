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
        ListNode* temp=head;
        ListNode* s=head;
        ListNode* f=head;
        while(f!=NULL and f->next!=NULL){
            s=s->next;
            f=f->next->next;
        }
        ListNode* cur=s;
        ListNode* pre=NULL;
        while(cur!=NULL){
            ListNode* ne=cur->next;
            cur->next=pre;
            pre=cur;
            cur=ne;
        }
        ListNode* e=pre;
        ListNode* st=head;
        while(e!=NULL){
            if(e->val!=st->val) return false;
            e=e->next;
            st=st->next;
        }
        return true;
    }
};
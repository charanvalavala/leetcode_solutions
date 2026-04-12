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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* head1 = headA;
        while(head1 != nullptr)
        {
            ListNode* head2 = headB;
            while(head2 != nullptr)
            {
                if(head1 == head2)return head2;
                head2 = head2->next;
            }
            head1 = head1->next;
        }
        return nullptr;
        
    }
};
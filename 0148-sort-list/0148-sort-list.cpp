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
    ListNode* sortList(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* anoHead = slow->next;
        slow->next = nullptr;

        ListNode* head1 = sortList(head);
        ListNode* head2 = sortList(anoHead);

        return merge(head1, head2);
    }

    ListNode* merge(ListNode* head1, ListNode* head2) {
        ListNode* ans = new ListNode(0);
        ListNode* tmp = ans;

        while (head1 != nullptr && head2 != nullptr) {
            if (head1->val <= head2->val) {
                tmp->next = head1;
                head1 = head1->next;
            } else {
                tmp->next = head2;
                head2 = head2->next;
            }
            tmp = tmp->next;
        }

        tmp->next = (head1 != nullptr) ? head1 : head2;

        return ans->next;
    }
};
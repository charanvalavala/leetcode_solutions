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
        ListNode* dummy = new ListNode();
        ListNode* curr = dummy;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int sum = carry;
            
            if (l1 != nullptr) {
                sum += l1->val;
            }
            if (l2 != nullptr) {
                sum += l2->val;
            }

            carry = sum / 10;

            if (l1 != nullptr) {
                l1->val = sum % 10;
                curr->next = l1;
                curr = l1;
                l1 = l1->next;
                if (l2 != nullptr) l2 = l2->next;
            } else if (l2 != nullptr) {
                l2->val = sum % 10;
                curr->next = l2;
                curr = l2;
                l2 = l2->next;
            } else {
                curr->next = new ListNode(sum % 10);
                curr = curr->next;
            }
        }

        ListNode* res = dummy->next;
        delete dummy;
        return res;
    }
};
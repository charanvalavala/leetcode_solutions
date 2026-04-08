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
    ListNode* middleNode(ListNode* head) {
        if (head == NULL)
            return nullptr;
        if (head->next == nullptr)
            return head;
        ListNode* curr = head;
        ListNode* ans = head;
        while (curr != nullptr && curr->next != nullptr) {
            curr = curr->next->next;
            ans= ans->next;
        }
        return ans;
    }
};
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
        ListNode* ans = nullptr;
        int count = 0;
        while (curr != nullptr) {
            curr = curr->next;
            count++;
        }
        curr = head;
        int req =(count / 2);;
        count = 0;
        while (count < req) {
            curr = curr->next;
            count++;
        }
        return curr;
    }
};
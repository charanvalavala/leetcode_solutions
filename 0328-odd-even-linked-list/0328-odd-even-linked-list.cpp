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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == nullptr)return head;
        ListNode* curr = head;
        ListNode* curr1 = head->next;
        ListNode* tmp = curr1;
        while(tmp != nullptr && tmp->next != nullptr)
        {
            curr->next = tmp->next;
            curr = curr->next;
            tmp->next = curr->next;
            tmp = tmp->next;
        }
        curr->next = curr1;
        return head;
    }
};
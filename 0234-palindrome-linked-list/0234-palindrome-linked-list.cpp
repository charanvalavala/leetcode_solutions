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
        ListNode*slow = head;
        ListNode* fast = head;
        while(fast != nullptr && fast->next != nullptr)
        {
            slow= slow->next;
            fast = fast->next->next;
        }
            ListNode* start = head;
            ListNode* mid = slow;
            ListNode* prev = nullptr;
            while(start != mid)
            {
                ListNode* tmp = start->next;
                start->next = prev;
                prev = start;
                start = tmp;
            }

        ListNode* second =  (fast != nullptr)?mid->next:mid;
        while(prev != nullptr && second != nullptr)
        {
            if(prev->val != second->val)return false;
            prev= prev->next;
            second = second->next;
        }
        return true;
    }
};
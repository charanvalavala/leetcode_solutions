class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prevGroupTail = dummy;

        while(true) {
            ListNode* check = prevGroupTail;
            for(int i = 0; i < k; i++) {
                check = check->next;
                if(check == nullptr) return dummy->next;
            }

            ListNode* groupHead = prevGroupTail->next;
            ListNode* curr = groupHead;
            ListNode* prev = nullptr;
            for(int i = 0; i < k; i++) {
                ListNode* nxt = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nxt;
            }

            prevGroupTail->next = prev;
            groupHead->next = curr;
            prevGroupTail = groupHead;
        }
    }
};
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *result= new ListNode(0);
        ListNode *dum = result;
        ListNode *ptr = list1;
        ListNode *ptr1 = list2;
        while(ptr != NULL && ptr1 != NULL)
        {
            if(ptr->val <= ptr1->val)
            {
                dum->next = ptr;
                dum= dum->next;
                ptr = ptr->next;
            }
            else if(ptr->val > ptr1->val)
            {
                dum->next = ptr1;
                dum= dum->next;
                ptr1 = ptr1->next;
            }
        }
        if(ptr != NULL)
        {
            dum->next = ptr;
        }
        else if(ptr1 != NULL)
        {
            dum->next = ptr1;
        }
        return result->next;
    }
};
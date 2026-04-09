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
        vector<int>arr;
        ListNode* tmp = head;
        while(tmp != nullptr)
        {
            arr.push_back(tmp->val);
            tmp = tmp->next;
        }
        sort(arr.begin(),arr.end());
        tmp =head;
        int n = arr.size();
        for(int i=0;i<n;i++)
        {
            tmp->val = arr[i];
            tmp=tmp->next;
        }
        return head;
        
    }
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     long long int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(long long int x) : val(x), next(nullptr) {}
 *     ListNode(long long int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    long long int reversenum(long long int x){
        long long int count =0;
        while(x!=0){
            long long int ans = x%10;
            count = count*10 + ans;
            x=x/10;
        }
        return count;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // long long int c1= 0;
        // while(l1!=nullptr){
        //     c1 = c1*10 + l1->val;
        //     l1=l1->next;
        // }
        // long long int c2 =0;
        //  while(l2!=nullptr){
        //     c2 = c2*10 + l2->val;
        //     l2=l2->next;
        // }
        // long long int count = reversenum(c1)+ reversenum(c2);
        // ListNode* a = new ListNode(count%10,nullptr);
        //  ListNode* c = a;
        // count = count/10;

        // while(count){
        //     ListNode* b = new ListNode(count%10,nullptr);
        //     a->next = b;
        //     a= a->next;
        //     count = count/10;
             

        // }
        // return c;
    
        int dig = (l1->val +l2->val)%10;
        int car = (l1->val + l2->val)/10;
        ListNode* a =  new ListNode(dig,nullptr);
        ListNode* c =a;
        l1 = l1->next;
        l2 = l2->next;




        while(l1!=nullptr && l2!=nullptr){
            int count = l1->val + l2->val + car;
            car = count/10;
            ListNode* b =  new ListNode(count%10,nullptr);
            a->next=b;
            a=a->next;
            l1 = l1->next;
            l2 = l2->next;
            }

        while(l1!=nullptr){
            a->next = new ListNode((l1->val +car)%10,nullptr);
            car = (l1->val +car)/10;
            a=a->next;
            l1=l1->next;
            
        }

        while(l2!=nullptr){
            a->next = new ListNode((l2->val + car)%10,nullptr);
            car = (l2->val +car)/10;
            a=a->next;
            l2=l2->next;
             

        }
        if(car){
            ListNode* b =  new ListNode(car,nullptr);
            a->next= b;
            a= a->next;
        }

    

        return c;
        




        
    }
};
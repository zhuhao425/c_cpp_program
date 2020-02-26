/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int add = 0;
        ListNode * p1 = l1;
        ListNode * p2 = l2;
        ListNode * res = new ListNode(-1);
        ListNode * p = res;
        while(p1 != NULL || p2 != NULL)
        {
            int sum = (p1 == NULL ? 0 : p1->val) + (p2 == NULL ? 0 : p2->val) + add;
            add = sum / 10;
            sum %= 10;
            p->next = new ListNode(sum);
            p = p->next;
            if(p1 != NULL) 
                p1 = p1->next;
            if(p2 != NULL)
                p2 = p2->next;
        }
        if(add != 0)
            p->next = new ListNode(add);
        ListNode * tmp =  res;
        res = res->next;
        delete tmp; 
        return res;
    }
};

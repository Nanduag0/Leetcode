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
    ListNode* partition(ListNode* head, int x)
    {
        ListNode smallhead(0);// = new ListNode(0);
        ListNode bighead(0);// = new ListNode(0);
        ListNode *s = &smallhead, *b = &bighead;
        
        while(head != NULL)
        {
            if(head->val < x)
            {
                s->next = head;
                s = s->next;
            }
            
            else
            {
                b->next = head;
                b = b->next;
            }
            
            head = head->next;
        }
        
        b->next = NULL;
        s->next = bighead.next;
        return smallhead.next;
    }
};
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
    ListNode* middle(ListNode* head)
    {
       ListNode* slow = head;
       ListNode* fast = head->next;
        
       while(!fast && !fast->next)
       {
           slow = slow->next;
           fast = fast->next->next;
       }
        
       ListNode* mid = slow->next;
       slow->next = NULL;
        
       return mid;
    }
    
    ListNode* merge(ListNode* l1, ListNode* l2)
    {
        ListNode* dummy = new ListNode(-1);
        ListNode* current = dummy;
        
        while(l1 && l2)
        {
            if(l1->val <= l2->val)
            {
                current->next = l1;
                l1 = l1->next;
            }
            
            else
            {
                current->next = l2;
                l2 = l2->next;
            }
            
            current = current->next;
        }
        
        current->next = (l1!=NULL) ? l1 : l2; 
        return dummy->next;
    }
    
public:
    ListNode* sortList(ListNode* head) 
    {
        if(!head || !head->next)
            return head;
        
        ListNode* mid = middle(head);
        
        ListNode* left = sortList(head);
        ListNode* right = sortList(mid);
        
        return merge(left, right);
    }
};
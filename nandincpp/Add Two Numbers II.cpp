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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        
        stack<int> stk1, stk2;
        
        while(temp1 != NULL)
        {
            stk1.push(temp1->val);
            temp1 = temp1->next;
        }
        
        while(temp2 != NULL)
        {
            stk2.push(temp2->val);
            temp2 = temp2->next;
        }
        
        ListNode* prev = NULL, *head;
        int carry = 0;
        
        while(!stk1.empty() || !stk2.empty())
        {
            int val = carry + (!stk1.empty() ? stk1.top() : 0) + (!stk2.empty() ? stk2.top() : 0);
            
            if(!stk1.empty())
                stk1.pop();
            if(!stk2.empty())
                stk2.pop();
            
            int sum = val%10;
            carry = val/10;
            
            ListNode* node = new ListNode(sum);
            
            node->next = prev;
            
            prev = node;
            head = node;
        }
        
        if(carry)
        {
            ListNode* node = new ListNode(carry);
            node->next = prev;
            head = node;
        }
        
        return head;
    }
};
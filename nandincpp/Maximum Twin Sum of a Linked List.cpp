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
    int pairSum(ListNode* head)
    {
        if(head == NULL)
            return 0;
        
        ListNode *slow = head, *fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode *mid = slow;
        slow = slow->next;
        mid = mid->next;
        int ans = 0;
        
        stack<int> stk;
        while(slow != NULL)
        {
            stk.push(slow->val);
            slow = slow->next;
        }
        
        while(head != mid)
        {
            int value = head->val + stk.top();
            ans = max(ans, value);
            head = head->next;
            stk.pop();
        }
        
        return ans;
    }
};
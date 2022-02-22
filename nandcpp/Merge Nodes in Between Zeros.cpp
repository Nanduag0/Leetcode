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
    ListNode* mergeNodes(ListNode* head) 
    {
        ListNode* temp = head;
        temp = temp->next;
        ListNode* head2 = new ListNode(-1);
        ListNode* head3 = head2;
        int cnt = 0;
        
        while(temp != NULL)
        {
            if(temp->val == 0)
            {
                head2->next =  new ListNode(cnt);
                head2 = head2->next;
                cnt = 0;
            }
            else
            {
                cnt += temp->val;
            }
            
            temp = temp->next;
        }
        
        return head3->next;
    }
};
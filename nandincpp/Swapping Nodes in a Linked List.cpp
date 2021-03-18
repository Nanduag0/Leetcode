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
    ListNode* swapNodes(ListNode* head, int k) 
    {
        ListNode* begi , *endd = head, *p1 = head;
        k--;
        
        while(k--)
            p1 = p1->next;
        
        begi = p1;
        
        while(p1->next)
        {
            p1 = p1->next;
            endd = endd->next;
        }
        
        swap(endd->val, begi->val);
        return head;
    }
};
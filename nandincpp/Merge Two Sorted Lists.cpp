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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head=new ListNode(0);
        ListNode* node =new ListNode(0);
        node=head;
        while(l1!=NULL && l2!=NULL)
        {
            if(l1->val<l2->val)
            {
                head->next=l1;
                l1=l1->next;
            }
            else{
                head->next=l2;
            l2=l2->next;
            }
            head=head->next;
        }
        if(l1!=NULL)
        {
            head->next=l1;
        }
        if(l2!=NULL)
        {
            head->next=l2;
        }
        return node->next;
    }
};
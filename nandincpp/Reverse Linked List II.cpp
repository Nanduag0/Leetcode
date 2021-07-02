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
    ListNode* reverseBetween(ListNode* head, int left, int right) 
    {
        ListNode* k = head;
        
        for(int i=1;i<left;i++)
            k = k->next;
        
        ListNode* temp = k;
        vector<int> v;
        
        for(int i=0;i<right-left+1;i++)
        {
            v.push_back(temp->val);
            temp = temp->next;
        }
        
        reverse(v.begin(), v.end());
        
        for(int i=0;i<v.size();i++)
        {
            k->val = v[i];
            k = k->next;
        }
        
        return head;
    }
};
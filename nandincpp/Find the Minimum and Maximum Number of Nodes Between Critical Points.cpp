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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) 
    {
        if(head->next->next==NULL || head->next->next->next==NULL)
            return {-1, -1};
        
        ListNode* p1 = head, *p2 = head->next, *p3 = head->next->next;
        int i = 1;
        vector<int> v;
        
        while(p3 != NULL)
        {
            if(p2->val>p1->val && p2->val>p3->val)
                v.push_back(i);
            else if(p2->val<p1->val && p2->val<p3->val)
                v.push_back(i);
            
            i++;
            p1 = p1->next;
            p2 = p2->next;
            p3 = p3->next;
        }
        
        if(v.size() <= 1)
            return {-1, -1};
        
        int localminima = INT_MAX;
        for(int l = 0 ; l < v.size()-1;l++)
        {
            localminima = min(v[l+1] - v[l],localminima);
        }

    return {localminima , v.back()-v[0]};
    }
};
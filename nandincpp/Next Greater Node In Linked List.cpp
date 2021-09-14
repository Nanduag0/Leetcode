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
    vector<int> nextLargerNodes(ListNode* head)
    {
        stack<pair<int, int>> stk;
        ListNode* temp = head;
        int len = 0;
        
        while(temp != NULL)
        {
            len++;
            temp = temp->next;
        }
        
        int i = 0;
        vector<int> ans(len, 0);
        
        while(head != NULL)
        {
            while(!stk.empty() && head->val>stk.top().first)
            {
                ans[stk.top().second] = head->val;
                stk.pop();
            }
            
            stk.push({head->val, i});
            i++;
            head = head->next;
        }
        
        return ans;
    }
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
     ListNode* p =headA ; 
        int count=0,count1=0;
        ListNode* q=headB;
while (p != NULL) //for find length of linklist A
{ 
  ++count; 
  p = p->next; 
}   
        while (q!= NULL) // for find length of linkedlist B
{ 
  ++count1; 
  q = q->next; 
}  
        int r=abs(count-count1);//take difference between linked list length
        if(count>count1){//which length of linkedlist is greater moved it to by difference length 
            for(int i=0;i<r;i++){
                headA=headA->next;
            }
        }
            else{
                  for(int i=0;i<r;i++){
                headB=headB->next;
                  }
            }
        
        while(headA!=headB){
            headA=headA->next;
            headB=headB->next;
        }
        return headA;
    }
};
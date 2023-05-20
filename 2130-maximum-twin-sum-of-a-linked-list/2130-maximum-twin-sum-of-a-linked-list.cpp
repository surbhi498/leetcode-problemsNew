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
    int pairSum(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* jk = head;
        while(fast && fast->next)
        {
            fast=fast->next->next;
            slow=slow->next;
        }    
        // we have got the middle of list now reverse list from here
        ListNode* prev = NULL;
        ListNode* nextnode=NULL;
        while(slow){
             nextnode = slow->next;
            slow->next=prev;
           // nextnode->next=slow;
            prev=slow;
            slow=nextnode;
            //nextnode=nextnode->next;
            
            
        }
        int max1= INT_MIN;
        while(prev){
            int fg = prev->val+jk->val;
            max1=max(max1,fg);
            prev=prev->next;
            jk= jk->next;
        }
        return max1;
    }
};
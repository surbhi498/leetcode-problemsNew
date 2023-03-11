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
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast =head;
        ListNode* slow = head;
        ListNode* ans = head;
        while(fast && slow && fast->next){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
                while(ans != fast){
            ans=ans->next;
            fast=fast->next;
        }
        return ans;
            }
        }
       return NULL;
    }
};
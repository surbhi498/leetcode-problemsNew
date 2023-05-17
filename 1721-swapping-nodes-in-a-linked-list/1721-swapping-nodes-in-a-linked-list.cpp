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
    int length(ListNode* head){
        ListNode* temp = head;
        int count=0;
        while(temp != NULL){
            temp = temp->next;
            count++;
        }
        return count;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        int cv = length(head);
        cout<<cv<<endl;
        int bac = cv-k+1;
        cout<<bac<<endl;
        ListNode* yu = head;
        ListNode* jk = head;
        int i=1;
        while(i<k){
            yu=yu->next;
            i++;
        }
        int j=1;
        while(j<bac){
           jk=jk->next;
           j++;   
        }
        int bn = yu->val;
        yu->val=jk->val;
        jk->val=bn;
        return head;
    }
};